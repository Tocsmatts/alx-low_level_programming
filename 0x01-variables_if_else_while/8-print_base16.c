#include <stdio.h>

/**
 * main - Hexadecimals
 *
 * Return: Return 0 on success
 */
int main(void)
{
	int hx;

	for (hx = 48; hx <= 57; hx++)
	{
		putchar(hx);
	}
	for (hx = 97; hx <= 102; hx++)
	{
		putchar(hx);
	}
	putchar('\n');
	return (0);
}
