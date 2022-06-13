#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints reverse of a string
 *
 * @s: s is a char
 */
void print_rev(char *s)
{
	char rev[1000];
	int a, b, count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	b = count - 1;
	for (a = 0; a < count; a++)
	{
		rev[a] = s[b];
		b--;
	}
	printf("%s\n", rev);
}
