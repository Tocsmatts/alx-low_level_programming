#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: is an int
 * @max: is an int
 * Return: Returns an int
 */
int *array_range(int min, int max)
{
	int *soln;
	int a;

	if (min > max)
		return (NULL);
	soln = malloc(sizeof(*soln) * ((max - min) + 1));
	if (soln == NULL)
		return (NULL);
	for (a = 0; min <= max; a++, min++)
		soln[a] = min;
	return (soln);
}
