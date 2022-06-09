#include "main.h"

/**
 * print_square - prints squares
 *
 * @size: An integer
 */
void print_square(int size)
{
	int j, k;

	if (size > 0)
	{
		j = 0;
		while (j < size)
		{
			k = 0;
			while (k < size)
			{
				_putchar(35);
				k++;
			}
			_putchar('\n');
			j++;
		}

	}
	else
		_putchar('\n');
}
