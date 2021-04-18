/**
 * reverse_array - function that reverses the content of an array of integers.
 *
 * @a: a pointer to an intger
 * @n: a pointer to an integer
 *
 * Auth: Zivile V. Silveira
 */

#include "holberton.h"

void reverse_array(int *a, int n)
{
	int *end;
	int *left;
	int b, c;

	end = &a[n - 1];
	left = a;

	while (left < end)
	{
		c = *left;
		b = *end;
		*left = b;
		*end = c;

		left++;
		end--;
	}
}
