#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds a and b
 * @a: int a
 * @b: int b
 * Return: Returns int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts b from a
 * @a: int a
 * @b: int b
 * Return: Returns int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a and b
 * @a: int a
 * @b: int b
 * Return: Returns int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a with b
 * @a: int a
 * @b: int b
 * Return: Returns int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulus of a and b
 * @a: int a
 * @b: int b
 * Return: Returns int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
