#include "main.h"
#include <string.h>

/**
 * _strncpy - copies strings
 * @dest: dest is a char
 * @src: src is a char
 * @n: n is an int
 * Return: Return char on success
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for ( ; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
