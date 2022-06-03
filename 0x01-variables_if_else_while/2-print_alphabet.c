#include <stdio.h>

/**
 * main - Code displays the alphabets
 *
 * Return: Returns 0 on success
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
		putchar(al);
	putchar('\n');
	return (0);
}
