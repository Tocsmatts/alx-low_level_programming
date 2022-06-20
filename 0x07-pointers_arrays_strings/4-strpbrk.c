#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any o the set of bytes
 * @s: a char
 * @accept: a char
 * Return: Return a char on success
 */
char *_strpbrk(char *s, char *accept)
{
	s = strpbrk(s, accept);
	return (s);
}
