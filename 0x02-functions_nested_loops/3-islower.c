#include "main.h"
#include <ctype.h>
/**
 * _islower - program to check for lowercase character
 *
 * @c: c is the variable
 *
 * Description: c this is a variable
 *
 * Return: Return 0 on success
 */
int _islower(int c)
{
	int var1 = c;

	if (islower(var1))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
