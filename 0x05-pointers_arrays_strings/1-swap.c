/**
 * swap_int - a function that swaps the values of two integers.
 *
 * @a: a pointer to an int
 * @b: a pointer to int
 */

#include "holberton.h"

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;

	*a = d;
	*b = c;

}
