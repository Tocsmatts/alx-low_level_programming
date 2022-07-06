#include "function_pointers.h"

/**
 * array_iterator - executes function given as a parameter on each element
 * @array: an int
 * @size: a size_t
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array && action)
		for (a = 0; a < size; a++)
		{
			action(array[a]);
		}
}
