#include "lists.h"

/**
 * add_dnodeint_end - function adds a new node at the end
 * @head: head
 * @n: int n
 * Return: address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h, *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = newnode;
	}
	else
	{
		*head = newnode;
	}
	newnode->prev = h;

	return (newnode);
}
