#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Returns (0) on success
 */
int main(void)
{
	char c;
	int i;
	long int ld;
	long long int lld;
	float f;

	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(ld));
	printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(lld));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}