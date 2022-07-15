#include "lists.h"

/**
 * add_node - Tis function adds a new node at the beginning of its list
 *
 * @head: the first in the list
 * @str: a char
 * Return: address of the head.
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t newc;
	list_t *added;

	added = malloc(sizeof(list_t));
	if (added == NULL)
		return (NULL);

	added->str = strdup(str);

	for (newc = 0; str[newc]; newc++)
		;

	added->len = newc;
	added->next = *head;
	*head = added;

	return (*head);
}
