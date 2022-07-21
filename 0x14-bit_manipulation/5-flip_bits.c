#include "main.h"

/**
 * flip_bits - returns the bits you need to flipto get from one number
 * @n: unsigned long int
 * @m: unsigned long int m
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bitnumber;

	for (bitnumber = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bitnumber++;
	}
	return (bitnumber);
}
