/*
 * Write a function that allocates memory using malloc.
 * malloc_checked - function
 * @b: integer
 * Auth: Zivile V. Silveira
 */

#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

void *malloc_checked(unsigned int b)
{
	unsigned int *a;

	a = malloc(sizeof(b));
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
