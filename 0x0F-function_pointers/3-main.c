#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - int main
 * @argc: arguement count
 * @argv: arguement vector
 * Return: Return int
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*solution)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	solution = get_op_func(argv[2]);
	if (solution == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", solution(a, b));
	return (0);
}
