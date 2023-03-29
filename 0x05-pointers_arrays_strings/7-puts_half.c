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

	if (i % 2 == 0)
	{
		for (n = i / 2; str[n] != '\0'; n++)
		{
			putchar(str[n]);
		}
	}

	else if (i % 2)
	{
		for (x = (i - 1) / 2; x < i - 1; x++)
		{
			putchar(str[x + 1]);
		}
	}

	putchar('\n');

}

