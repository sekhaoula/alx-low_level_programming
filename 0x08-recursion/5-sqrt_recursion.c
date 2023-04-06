#include<stdio.h>

/**
 * _sqrt_recursion - return natural squar root of a number
 * @n: number given to know it root
 * @m: number used to get the root
 *
 * Return: main function that helps to get the root
 */

int main_sqrt_recursion(int n, int m);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (main_sqrt_recursion(n, 0));
}

/**
 * main_sqrt_recursion - helper function to get the root
 * @n: number given to know the root
 * @m: the number n's root
 *
 * Return: squar of n
 */
int main_sqrt_recursion(int n, int m)
{
	if ((m * m) > n)
		return (-1);
	if ((m * m) == n)
		return (m);
	return (main_sqrt_recursion(n, m + 1));
}

