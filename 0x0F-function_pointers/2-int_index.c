#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: is an integer
 * @size: is an integer
 * @cmp: is a pointer to function
 * Return: Returns int on success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0)
		return (-1);
	for (a = 0; a < size; a++)
		if (cmp(array[a]))
			return (a);
	return (-1);
}
