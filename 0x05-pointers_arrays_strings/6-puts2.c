#include "main.h"

/**
 * puts2 - prints string divisible by 2
 *
 * @str: char str
 */
void puts2(char *str)
{
	int countStr = 0;

	while (countStr >= 0)
	{
		if (str[countStr] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (countStr % 2 == 0)
		{
			_putchar(str[countStr]);
		}
		countStr++;
	}
}
