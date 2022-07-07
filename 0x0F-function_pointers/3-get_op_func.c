#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - celects the correct function
 * @s: char
 * Return: Return int
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 6)
	{
		if (s[0] == ops->op[i])
			break;
		i++;
	}
	return (ops[i / 2].f);
}
