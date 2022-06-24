#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies numbers
 * @argc: counts args
 * @argv: arg vector
 * Return: Return 0 on success
 */
int main(int argc, char *argv[])
{
	int mul = 1;
	int i;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
