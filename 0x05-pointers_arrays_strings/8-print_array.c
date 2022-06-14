#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array
 *
 * @a: a is an integer
 * @n: n is an integer
 */
void print_array(int *a, int n)
{
	int count;

	if (n >= 0)
	{
		count = 0;
		while (count < n - 1)
		{
			printf("%i, ", a[count]);
			count++;
		}
		printf("%i\n", a[n - 1]);
	}
	else
		printf("\n");
}
