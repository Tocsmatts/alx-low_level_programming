#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: an integer
 * Return: Return dest on success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
	{
		*(dest + z) = *(src + z);
	}
	return (dest);
}
