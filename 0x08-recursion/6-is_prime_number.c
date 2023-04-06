#include<stdio.h>

/**
 * is_prime_number - tells if it's a prime number
 * @n: number to check
 * @m: helper
 *
 * Return: 1 if number is prime, 0 if it's not
 */

int main_prime_number(int n, int m);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (main_prime_number(n, n - 1));
}

/**
 * main_prime_number - calculate if n is a prime number
 * @n: number to check
 * @m: helper
 *
 * Return: 1 if it's prime, 0 if not
 */

int main_prime_number(int n, int m)
{
	if (m == 1)
		return (1);
	if (n % m == 0 && m > 0)
		return (0);
	return (main_prime_number(n, m - 1));
}

