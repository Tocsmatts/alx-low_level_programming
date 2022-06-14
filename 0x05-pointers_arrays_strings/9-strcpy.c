#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - copy string
 *
 * @dest: dest is a char
 * @src: src is a char
 * Return: Return dest on success
 */
char *_strcpy(char *dest, char *src)
{
	dest = strcpy(dest, src);
	return (dest);
}
