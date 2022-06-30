#include "main.h"
#include <stdlib.h>

/**
 * _calloc - alllocates memory for an array
 * @nmemb: is an int
 * @size: is an int
 * Return: Return nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int abb;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (abb = 0; abb < (nmemb * size); abb++)
		a[abb] = 0;
	return (a);
}
