#include "main.h"
#include <string.h>

/**
 * _strstr - function that locates a substring
 * @haystack: is a char
 * @needle: is a char
 * Return: Returns a char on success
 */
char *_strstr(char *haystack, char *needle)
{
	haystack = strstr(haystack, needle);
	return (haystack);
}
