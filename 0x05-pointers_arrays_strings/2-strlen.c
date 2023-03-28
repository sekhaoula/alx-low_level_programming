#include<stdio.h>

/**
 * main -  returns the length of a string
 * _strlen: provide the len of char
 * @s: return value of '_strlen'
*/

int _strlen(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);

}

