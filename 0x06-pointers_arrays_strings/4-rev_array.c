#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse an array
 * @a: a i an int
 * @n: n is an int
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i > 0 && a[i] != 0; i--)
	{
		printf("%d, ", a[i]);
	}
}
