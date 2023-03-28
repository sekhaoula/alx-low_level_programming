#include<stdio.h>

/**
 * rint_rev - prints sting in revers
 * @str: the string reversed
 * Return: Always 0
*/

void print_rev(char *s)
{
	int i = 0, l, len;

	while (s[i] != '\0')
	{
		i++;
	}
	
	len = i;

	for ( l= len -1; l >= 0; l--)
	{
		putchar(s[l]);
	}

	putchar('\n');
}

