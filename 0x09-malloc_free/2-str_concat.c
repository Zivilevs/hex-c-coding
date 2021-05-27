/**
 * str_concat - function that concatenates two strings.
 * @s1: string
 * @s2: string
 * Return: array
 * Auth: Zivile V. Silveira
 */

#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

char *str_concat(char *s1, char *s2)
{
	int i, j, f;
	char *arr, *temp1, *temp2;

	if ((s1 == NULL) || (s2 == NULL))
	{
		return (NULL);
	}

	temp1 = s1;
	temp2 = s2;
	i = 0;
	j = 0;

	while (*s1 != '\0')
	{
		s1 = s1 + 1;
		i++;
	}
	while (*s2 != '\0')
	{
		s2 = s2 + 1;
		j++;
	}
	arr = malloc(sizeof(char) * (i + j + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (f = 0; f < i; f++)
		{
			arr[f] = *(temp1 + f);
		}
		for (f = 0; f <= j; f++)
		{
			arr[i + f] = *(temp2 + f);
		}
		return (arr);
	}
}
