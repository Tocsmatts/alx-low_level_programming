#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @seperator: a char
 * @n: unsigned int
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int a;

	va_start(ap, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(ap, int));
		if (seperator && a < n - 1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(ap);
}
