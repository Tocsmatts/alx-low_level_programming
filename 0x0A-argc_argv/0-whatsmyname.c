#include <stdio.h>

/**
 * main - prints file name
 * @argc: is an int
 * @argv: is a char
 * Return: Return 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
