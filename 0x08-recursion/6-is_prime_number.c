#include "main.h"

/**
 * is_prime_number - gives a prime number
 * @n: n is an int
 * Return: Returns an int
 */
int is_prime_number(int n)
{
	int i;
	int agg = 0;

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
			agg++;
	}
	if (agg == 2)
		return (1);
	else
		return (0);
}
