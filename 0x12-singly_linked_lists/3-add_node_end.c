#include "lists.h"

/**
 * add_node_end - This function adds a new node at the end of its list
 *
 * @head: This is the head of the linked list.
 * @str: a char
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *added, *temp;
	size_t newc;

	added = malloc(sizeof(list_t));
	if (added == NULL)
		return (NULL);
	added->str = strdup(str);
	for (newc = 0; str[newc]; newc++)
		;

	added->len = newc;
	added->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		*head = added;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = added;
	}
	return (*head);
}
