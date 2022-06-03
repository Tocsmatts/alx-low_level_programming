#include <stdio.h>

/**
 * main - Print single digit numbers
 *
 * Return: Returns 0 on success
 */
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		printf("%d", c);
	}
	printf("\n");
	return (0);
}
