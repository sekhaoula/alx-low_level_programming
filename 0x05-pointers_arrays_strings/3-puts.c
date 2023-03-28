#include<stdio.h>

/**
 * _puts - prints a string followed by a new line
 * @str: the string printed
 * Returns: Always 0
*/

void _puts(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}

