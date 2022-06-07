#include "main.h"

/**
 * print_sign - code to print sign of number
 *
 * @n: this is a variable
 *
 * Return: Returns 0 on success
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
