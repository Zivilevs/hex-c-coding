/**
 * print_array - function that prints n
 * elements of an array of integers, followed by a new line.
 * @a: a pointer to a int
 * @n: integer
 *
 */

#include <stdio.h>
#include "holberton.h"

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));

		if (i != (n - 1))
			printf(", ");
	}

	if (n >= 0)
	{
		printf("\n");
	}
	else
	{
		printf("\n");
	}
}
