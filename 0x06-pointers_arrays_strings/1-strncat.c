#include<stdio.h>
#include<string.h>
/**
 * _strncat - function that concatenates two strings
 * @dest: string to  print
 * @src: string to take from
 * @n: number of characters  to tak from src
 *
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}

