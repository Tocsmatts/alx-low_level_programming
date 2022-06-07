#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _abs - code to compute absolute value
 *
 * @a: this is an integer
 *
 * Return: Returns 0 on success
 */
int _abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (a * -1);
}
