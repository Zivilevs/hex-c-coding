/**
 * str_concat - function that concatenates two strings.
 * _strdup - copy string
 * @str: string
 * Return: array
 * Auth: Zivile V. Silveira
 */

#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

char *_strdup(char *str);

char *str_concat(char *s1, char *s2)
{
	int i, j, f;
	char *arr, *temp1, *temp2;

	if ((s1 == NULL) && (s2 != NULL))
	{
		arr = _strdup(s2);
		return (arr);
	}
	else if ((s1 != NULL) && (s2 == NULL))
	{
		arr = _strdup(s1);
		return (arr);
	}
	else if ((s1 == NULL) && (s2 == NULL))
	{
		arr = malloc(sizeof(char) * 0);
		arr[0] = '\0';
		return (arr);
	}
	else
	{
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
			for (f = 0; f < j; f++)
			{
				arr[i + f] = *(temp2 + f);
			}
			return (arr);
		}
	}
}

/**
 * _strdup - copy string
 * @str: string
 * Return: string
 */
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
	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j < i; j++)
		{
			arr[j] = *(temp + j);
		}
		return (arr);
	}
}
