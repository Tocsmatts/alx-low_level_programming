#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of linked list
 * @index: int index
 * Return: index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	for (x = 0; x < index && head != NULL; x++)
	{
		head = head->next;
	}
	return (head);
}
