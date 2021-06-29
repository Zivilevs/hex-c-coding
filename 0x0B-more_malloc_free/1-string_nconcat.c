/**
 * string_nconcat - a function that concatenates 2 strings.
 * @str: strin, for length function.
 * Return: pointer
 * Auth: Zivile V. Silveira
 */

#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

unsigned int length(char *str);

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int len, a, b;

	if (s1 == NULL || s2 == NULL)
	{
		arr = malloc(sizeof(char) * 0);
		arr[0] = '\0';
		return (arr);
	}
	else
	{
		len = length(s1);
		arr = malloc(sizeof(char) * (len + n + 1));
		if (arr == NULL)
		{
			return (NULL);
		}
		for (b = 0; b < len; b++)
		{
			arr[b] = s1[b];
		}
		a = 0;
		while ((a < n) && (s2[a] != '\0'))
		{
			arr[len + a] = s2[a];
			a++;
		}
		arr[len + a + 1] = '\0';
		return (arr);
	}
}

/**
 * length - calculate string length
 * @str: string
 * Return: unsigned int
 */

unsigned int length(char *str)
{
	unsigned int a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}
