#include "lists.h"

/**
 * list_len - This function returns then number of elements in a list.
 *
 * @h: This is a user defined variable
 * Return: Function returns the number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t itemsno;

	itemsno = 0;
	while (h != NULL)
	{
		h = h->next;
		itemsno++;
	}
	return (itemsno);
}
