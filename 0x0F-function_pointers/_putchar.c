#include <unistd.h>
#include "main.h"

/**
 * _puchar - prints a character
 *
 * @c: This is a character
 *
 * Return: Returns 1 0n success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
