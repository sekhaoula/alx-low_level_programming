#include<stdio.h>
#include "main.h"

/**
 * _strlen_recursion - gives the lengh of the given string
 * @s: string to get the lengh from
 *
 * Return: lengh of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

