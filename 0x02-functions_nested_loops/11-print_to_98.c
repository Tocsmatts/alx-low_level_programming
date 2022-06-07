#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - code to print numbers to 98
 *
 * @n: Intger
 *
 * Return: Return nothing on success
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
			printf("%d, ", n);
	}
	else
	{
		for (; n < 98; n++)
			printf("%d, ", n);
	}
	printf("%d\n", n);
}
