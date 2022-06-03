#include <stdio.h>

/**
 * main - Print comb
 *
 * Return: Return 0 on success
 */
int main(void)
{
	char cb;

	for (cb = 48; cb < 58; cb++)
	{
		putchar(cb);
		if (cb != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
