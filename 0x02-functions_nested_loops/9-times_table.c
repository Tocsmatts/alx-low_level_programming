#include "main.h"

/**
 * times_table - prints times table
 *
 * Return: Return 0 on success
 */
void times_table(void)
{
	int i, j, ab;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			ab = i * j;
			_putchar(44);
			_putchar(32);
			if (ab <= 9)
			{
				_putchar(32);
				_putchar(ab + 48);
			}
			else
			{
				_putchar((ab / 10) + 48);
				_putchar((ab % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
