#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - prints strings
 * @seperator: a char
 * @n: unsigned int
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *copy;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		copy = va_arg(ap, char *);
		if (copy)
			printf("%s", copy);
		else
			printf("(nil)");
		if (seperator && i < n - 1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(ap);
}
