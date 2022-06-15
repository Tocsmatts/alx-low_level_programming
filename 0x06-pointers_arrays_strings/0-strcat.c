#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates string
 *
 * @dest: dest is a char
 * @src: src is a char
 * Return: Returns dest on success
 */
char *_strcat(char *dest, char *src)
{
	dest = strcat(dest, src);
	return (dest);
}
