#include "main.h"

/**
 * swap_int - swaps two integers
 *
 * @a: a is an integer
 * @b: b is an integer
 * Return: Returns void
 */
void swap_int(int *a, int *b)
{
	int ab = *a;
	*a = *b;
	*b = ab;
}
