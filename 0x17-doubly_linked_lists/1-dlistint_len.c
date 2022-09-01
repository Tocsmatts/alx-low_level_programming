#include "lists.h"

/**
 * dlistint_len - function gives the no of elements
 *
 * @h: head
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num;

	num = 0;

	if (h == NULL)
		return (num);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}
