#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * factorial - returns the factorial of a given number
 * @n : n is an int
 * Return: Returns an int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
