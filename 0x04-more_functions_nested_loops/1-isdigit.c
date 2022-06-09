#include "main.h"

/**
 * _isdigit - function that tells if value is a digit
 *
 * @c: c is a char
 * Return: Return 1 on success and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
