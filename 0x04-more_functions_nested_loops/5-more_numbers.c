#include "main.h"

/**
 * more_numbers - prints more numbers
 *
 */
void more_numbers(void)
{
	int i, j;

	j = 0;
	while (j < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + 48);
			}
			_putchar((i % 10) + 48);
		}
		j++;
		_putchar('\n');
	}
}
