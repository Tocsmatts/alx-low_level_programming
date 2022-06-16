#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates strings
 *
 * @dest: dest is a char
 * @src: src is a cahr
 * @n: n is an int
 * Return: Return dest on success
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*src = src[i];
		dest = strcat(dest, src);
	}
	return (dest);
}
