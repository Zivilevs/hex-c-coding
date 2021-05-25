/**
 * create_array - function to create an arraye.
 * @size: integrer
 * @c: char
 * Return: array
 * Auth: Zivile V. Silveira
 */

#include "holberton.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(*arr) * size);
	if ((arr == NULL) || (size == 0))
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	}
	return (arr);
}
