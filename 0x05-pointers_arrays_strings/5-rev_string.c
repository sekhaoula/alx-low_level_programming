#include<stdio.h>

/**
 *rev_string - unction that reverses a string.
 *@s: the string to revers
*/

void rev_string(char *s)
{
	char str;
	int i, len, len1;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		str = s[i];
		s[i] = s[len1];
		s[len1--] = str;
	}

}

