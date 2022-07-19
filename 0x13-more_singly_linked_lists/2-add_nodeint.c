#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function adds new node at the beginning
 * @head: a pointer
 * @n: an int
 * Return: type listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
