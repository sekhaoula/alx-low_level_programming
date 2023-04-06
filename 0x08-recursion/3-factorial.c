#include<stdio.h>

/**
 * factorial - fuction that return the factorial of a given number
 * @n: number to get the factorial from
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}

