#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of the linked list
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int lil;
	listint_t *fr;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;

	lil = temp->n;
	fr = temp->next;

	free(temp);

	*head = fr;

	return (lil);
}
