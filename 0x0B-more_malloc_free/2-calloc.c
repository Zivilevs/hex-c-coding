/**
 * _calloc - a function that allocates memory for an array.
 * @nmemb: unsighed int
 * @size: unsiged int
 * Return: pointer
 * Auth: Zivile V. Silveira
 */

#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	char *ptr2 = (char *)ptr;

	for (i = 0; i < nmemb; i++)
	{
	*ptr2++ = 0;
	}
	return (ptr);
}
