#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of the char
 *
 * @str: str is a char
 */
void puts_half(char *str)
{
	int len, count;

	len = strlen(str);
	if (len % 2 == 0)
	{
		count = len / 2;
		while (count >= 0)
		{
			if (str[count] == '\0')
			{
				printf("\n");
				break;
			}
			else
			{
				printf("%c", str[count]);
			}
			count++;
		}
	}
	else
	{
		count = (len - 1) / 2;
		while (count >= 0)
		{
			if (str[count] == '\0')
			{
				printf("\n");
				break;
			}
			else
			{
				printf("%c", str[count]);
			}
			count++;
		}
	}
}
