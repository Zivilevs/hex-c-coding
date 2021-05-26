/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: string
 * Return: array
 * Auth: Zivile V. Silveira
 */

#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

char *_strdup(char *str)
{
	int i, j;
	char *arr;
	char *temp;

	if (str == NULL)
	{
		return (NULL);
	}

	temp = str;
	i = 0;
	while (*str != '\0')
	{
		str = str + 1;
		i++;
	}
	arr = malloc(sizeof(char) * (i + 1));
	for (j = 0; j < i; j++)
	{
		arr[j] = *(temp + j);
	}
	return (arr);
}
