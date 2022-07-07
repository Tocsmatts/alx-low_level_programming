#include "variadic_functions.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints all
 * @format: list of arguments
 */
void print_all(const char * const format, ...)
{
	va_list ap;

	va_start(ap, format);

	printf("\n");
	va_end(ap);
}
