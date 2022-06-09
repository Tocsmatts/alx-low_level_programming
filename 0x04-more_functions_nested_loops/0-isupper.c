#include "main.h"

/**
 * _isupper - returns an upper value
 *
 * @c: This is an integer
 *
 * Return: Returns 1 if uppercase, return 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
