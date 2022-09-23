#include "hash_tables.h"

/**
 * hash_table_delete - function deletes a hash table
 *
 * @ht: ht pointer
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *temp1;
	hash_node_t *temp2;

	if (ht == NULL)
		return;
	for (x = 0; x < ht->size; x++)
	{
		temp1 = ht->array[x];
		while ((temp2 = temp1) != NULL)
		{
			temp1 = temp1->next;
			free(temp2->key);
			free(temp2->value);
			free(temp2);
		}
	}
	free(ht->array);
	free(ht);
}
