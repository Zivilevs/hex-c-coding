/*
 * Write a function that allocates memory using malloc.
 * @b: integer
 * Auth: Zivile V. Silveira
 */

#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(sizeof(b));
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
