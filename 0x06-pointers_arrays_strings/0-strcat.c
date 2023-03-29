#include<stdio.h>

/**
 * *_strcat - function that concatenates two strings.
 * @dest:function that take the string from src
 * @src:function that appends to src
*/

char *_strcat(char *dest, char *src)
{
	int i, n;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	n = 0;
	while (src[n] != '\0')
	{
		dest[n + i] = src[n];
		n++;
	}

	dest[n + i] = '\0';

	return dest;

}

