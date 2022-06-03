#include <stdio.h>

/**
 * main - Print uppercase and lowercase alphabet
 *
 * Return: Return 0 on success
 */
int main(void)
{
	char uca, lca;

	for (lca = 'a'; lca <= 'z'; lca++)
		putchar(lca);
	for (uca = 'A'; uca <= 'Z'; uca++)
		putchar(uca);
	putchar('\n');
	return (0);
}
