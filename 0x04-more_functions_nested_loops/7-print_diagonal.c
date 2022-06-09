#include "main.h"

/**
 * print_diagonal - prints diagonally
 *
 * @n: This is an integer
 */
void print_diagonal(int n)
{
	int s = 32;
	int bs = 92;
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(s);
		}
		_putchar(bs);
		if (a < (n - 1))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
