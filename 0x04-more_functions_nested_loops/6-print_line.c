#include "main.h"

/**
 * print_line - prints lines
 *
 * @n: Integer
 */
void print_line(int n)
{
	if (n > 0)
	{
		n = n;
		while (n != 0)
		{
			_putchar(95);
			n--;
		}
	}
	_putchar('\n');
}
