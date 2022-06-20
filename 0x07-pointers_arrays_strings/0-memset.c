#include "main.h"

/**
 * _memset - fills the memory with a constant byte
 *
 * @s: is a char
 * @b: is a char
 * @n: is an int
 * Return: Returns a char on success
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
	{
		*(s + z) = b;
	}
	return (s);
}
