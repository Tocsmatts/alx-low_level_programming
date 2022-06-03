#include <stdio.h>

/**
 * main - Code displays the alphabets excluding e and q
 *
 * Return: Returns 0 on success
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		if (al != 'e' && al != 'q')
		{
			putchar(al);
		}
	}
	putchar('\n');
	return (0);
}
