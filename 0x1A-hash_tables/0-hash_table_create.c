#include "hash_tables.h"

/**
 * hash_table_create - function creates a hash table
 *
 * @size: hash table size
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;
	hash_node_t **array;
	unsigned long int x;

	h_table = malloc(sizeof(hash_table_t));
	if (h_table == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		array[x] = NULL;

	h_table->array = array;
	h_table->size = size;

	return (h_table);
}
