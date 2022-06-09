#include <stdio.h>

/**
 * main - code that prints Buzz, Fuzz and FizzBuzz
 *
 * Return: Return 0 on success
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (a % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (a % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", a);
		}
	}
	printf("\n");
	return (0);
}
