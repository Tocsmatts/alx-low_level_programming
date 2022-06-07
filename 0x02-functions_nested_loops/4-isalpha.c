#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks code for alphabets
 *
 * @c: is an integer
 *
 * Returns: Returns 0 on success
 */
int _isalpha(int c)
{
	int var1 = c;

	if (isalpha(var1))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
