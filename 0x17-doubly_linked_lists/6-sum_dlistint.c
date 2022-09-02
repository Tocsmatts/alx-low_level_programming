#include "lists.h"

/**
 * sum_dlistint - function returns the sum of all data
 *
 * @head: head
 * Return: sum_all
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_all;

	sum_all = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			sum_all += head->n;
			head = head->next;
		}
	}

	return (sum_all);
}
