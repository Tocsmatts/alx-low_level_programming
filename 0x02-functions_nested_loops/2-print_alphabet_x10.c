#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet ten times
 *
 * Return: Return 0 on success
 */
void print_alphabet_x10(void)
{
	int lp = 0;

	while (lp < 10)
	{
		int a;

		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		lp++;
		_putchar('\n');
	}
}
