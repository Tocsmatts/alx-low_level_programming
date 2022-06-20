#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: a char
 * @accept: a char
 * Return: Returns an unsugned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int z;

	z = strspn(s, accept);
	return (z);
}
