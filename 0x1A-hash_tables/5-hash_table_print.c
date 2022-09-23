#include "hash_tables.h"

/**
 * hash_table_print - function prints key, value
 *
 * @ht: ht pointer
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *temp;
	char *seperator;

	if (ht == NULL)
		return;

	printf("{");
	seperator = "";

	for (x = 0; x < ht->size; x++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", seperator, temp->key, temp->value);
			seperator = ", ";
			temp = temp->next;
		}
	}
	printf("}\n");
}
