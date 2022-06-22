#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _pow_recursion - gives the power value
 * @x: x is an int
 * @y: y is an int
 * Return: Return int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
