#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 * @head: a type listint_t
 */
void free_listint(listint_t *head)
{
	listint_t *ord;

	while ((ord = head) != NULL)
	{
		head = head->next;
		free(ord);
	}
}
