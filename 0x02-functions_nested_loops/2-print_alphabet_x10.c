#include "main.h"

/**
 * print_alphabet_x1O - print alphabet 10 times
 *
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char i;

	while (count++ <= 9)
	{
		for (i = 'a' ; i <= 'z' ; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

