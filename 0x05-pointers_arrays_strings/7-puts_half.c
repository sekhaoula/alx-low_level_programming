#include<stdio.h>

/**
 * puts_half - prints half of a string
 * @str: the string to print from
*/

void puts_half(char *str)
{
	int n, i, x;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	n = i / 2;

	if (n % 2 == 0)
	{
		n = i /2;
	}
	else
	{
		n = (i / 2) + 1;
	}

	for (x = n; x < i; x++)
	{
		putchar(str[x]);
	}

	putchar('\n');

}

