#include "hash_tables.h"

/**
 * add_n_hash - function adds a node at the beginning
 *
 * @head: head
 * @key: hash key
 * @value: value
 * Return: head
 */
hash_node_t *hash_add(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *temp;

	temp = *head;

	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (*head);
		}
		temp = temp->next;
	}

	temp = malloc(sizeof(hash_node_t));

	if (temp == NULL)
		return (NULL);
	temp->key = strdup(key);
	temp->value = strdup(value);
	temp->next = *head;
	*head = temp;
	return (*head);
}

/**
 * hash_table_set - adds a hash (key, value) to a given hash table
 *
 * @ht: pointer to the hash table
 * @key: key of the hash
 * @value: value to store
 * Return: 1 if successes, 0 if fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ky_index;

	if (ht == NULL)
		return (0);
	if (key == NULL || *key == '\0')
		return (0);
	ky_index = key_index((unsigned char *)key, ht->size);
	if (hash_add(&(ht->array[ky_index]), key, value) == NULL)
		return (0);
	return (1);
}
