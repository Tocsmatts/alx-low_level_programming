#include "main.h"

/**
 * print_alphabet - Program that prints the lowercase alphabet
 *
 * Description: Program to print alphabet
 *
 * Return: Return 0 on success
 */
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
		_putchar(a);
	_putchar('\n');
}
