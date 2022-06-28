#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: is a string
 * Return: Return char on success
 */
char *_strdup(char *str)
{
	char *target;

	if (str == NULL)
		return (NULL);
	target = strdup(str);
	return (target);
}
