#include "lists.h"

/**
 * sum_listint - sums all int data list
 * @head: head of list
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int sumofint = 0;

	while (head != NULL)
	{
		sumofint += head->n;
		head = head->next;
	}
	return (sumofint);
}
