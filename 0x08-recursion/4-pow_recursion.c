#include<stdio.h>

/**
 * _pow_recursion - returns the value of x raised to y
 * @x: the number to raise
 * @y: the value of raising
 *
 * Return: value of x raised by y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

