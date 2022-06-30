#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory block
 * @ptr: void ptr
 * @old_size: an int
 * @new_size: an unsigned int
 * Return: Return
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
