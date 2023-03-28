#include<stdio.h>

/**
 * main -  returns the length of a string
 * @s: character of string
 * len: provide the len of char
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

