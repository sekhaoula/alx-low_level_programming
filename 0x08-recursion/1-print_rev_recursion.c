#include<stdio.h>

/**
 * _print_rev_recursion - print a stray in reverse
 *
 * @s: string printed in reverse
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	putchar(*s);

}
