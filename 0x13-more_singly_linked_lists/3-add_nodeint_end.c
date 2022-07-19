#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds new node at the end
 * @head: pointer to type listint_t
 * @n: an int
 * Return: listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	temp = *head;
	if (*head == NULL)
		*head = newnode;
	else
	{
		while (temp->next != 0)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return (*head);
}
