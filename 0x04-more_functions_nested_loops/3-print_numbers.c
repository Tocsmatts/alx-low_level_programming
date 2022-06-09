#include "main.h"

/**
 * print_numbers - prints numbers
 *
 * Return: Returns 0 on success
 */
void print_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
