#include<stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str: the string to print
 */

void puts2(char *str)
{
	int N, i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	for (N = 0; N < i; N += 2)
	{
		putchar(str[N]);
	}

	putchar('\n');

}

