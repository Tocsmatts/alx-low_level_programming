#include "main.h"

/**
 * print_last_digit - prints the last digit
 *
 * @a: This is a variable
 *
 * Return: Returns 0 on success
 */
int print_last_digit(int a)
{
	int d = a % 10;

	if (d < 0)
	{
		_putchar(-d + '0');
		return (-d);
	}
	else
	{
		_putchar(d + '0');
		return (d);
	}
}
