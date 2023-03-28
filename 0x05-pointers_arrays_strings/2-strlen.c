#include<stdio.h>

/**
 * _strlen -  returns the length of a string
 * @s: string to check
 *
 * Return: return value of '_strlen'
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

