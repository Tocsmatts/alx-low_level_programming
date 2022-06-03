#include <stdio.h>

/**
 * main - Program to print lowercase of alphabet in reverse order
 *
 * Return: Return 0 on success
 */
int main(void)
{
	char al;

	for (al = 122; al >= 97; al--)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
