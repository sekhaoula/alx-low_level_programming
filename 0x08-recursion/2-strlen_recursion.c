#include<stdio.h>

/**
 * _strlen_recursion - returns the lengh of a string
 *
 * @s: string to get the lengh from
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

