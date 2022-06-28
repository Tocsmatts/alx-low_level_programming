#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Return 2 on success
 */
char *str_concat(char *s1, char *s2)
{
	s1 = strcat(s1, s2);
	return (s1);
}
