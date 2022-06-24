#include <stdio.h>

/**
 * main - prints the number of args passed to it
 * @argc: counts the no of args
 * @argv: arguemant vectors
 * Return: Returns 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
