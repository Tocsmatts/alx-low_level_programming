#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function frees a listint_t
 * @head: type listint_t
 */
void free_listint2(listint_t **head)
{
	listint_t *cln, *temp;

	if (head != NULL)
	{
		cln = *head;
		while ((temp = cln) != NULL)
		{
			cln = cln->next;
			free(temp);
		}
		*head = NULL;
	}
}
