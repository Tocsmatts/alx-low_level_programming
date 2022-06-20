#include "main.h"
#include <string.h>

/**
 * _strchr - function to locate a character in a string
 * @s: a char
 * @c: a char
 * Return: Return a on success
 */
char *_strchr(char *s, char c)
{
	s = strchr(s, c);
	return (s);
}
