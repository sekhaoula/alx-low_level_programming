#include<stdio.h>

/**
 * _strncpy - function that copies a string
 * @dest: string to copy
 * @src: string copied
 * @n: number of characters
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (dest[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

