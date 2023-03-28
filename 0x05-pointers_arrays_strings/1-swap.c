#include<stdio.h>

/**
 *  swap_int - swaps the value of the variable
 * the pointer will swap a by b
 * @a: integer to swap
 * @b: integer swaped
*/

void swap_int(int *a, int *b)
{
	int e;

	e = *a;
	*a = *b;
	*b = e;
}

