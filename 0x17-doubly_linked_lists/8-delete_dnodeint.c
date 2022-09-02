#include "lists.h"

/**
 * delete_dnodeint_at_index - function deletes specified node
 * @head: head
 * @index: index
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hd, *h2;
	unsigned int x;

	hd = *head;
	if (hd != NULL)
		while (hd->prev != NULL)
			hd = hd->prev;
	x = 0;
	while (hd != NULL)
	{
		if (x == index)
		{
			if (x == 0)
			{
				*head = hd->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = hd->next;

				if (hd->next != NULL)
					hd->next->prev = h2;
			}
			free(hd);
			return (1);
		}
		h2 = hd;
		hd = hd->next;
		x++;
	}
	return (-1);
}
