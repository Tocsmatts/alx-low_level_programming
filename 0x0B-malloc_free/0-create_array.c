#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array or chars
 * @size: an int
 * @c: c is a char
 * Return: Return 0 on sucess
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *st;

	if (size == 0)
		return (NULL);
	st = malloc(size * sizeof(c));
	if (st == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		st[i] = c;
	return (st);
}
