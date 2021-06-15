/**
 * argstostr - function that concatenates all arguments of the program
 * ac: integer
 * av: **char
 * Return: char pointer
 * srleng - string length
 * @str: arguments char
 * Auth: Zivile V. Silveira
 */

#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

int srleng(char *str);

char *argstostr(int ac, char **av)
{
	char *arr;
	int i, j, b;
	int len;
	int leng;

	len = 0;

	if ((ac == 0) || (av == NULL))
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < ac; i++)
		{
			j = 0;
			while (av[i][j] != '\0')
			{
				j++;

			}
			len += j;
		}

		arr = (char *)malloc(sizeof(char) * (len + ac));

		b = 0;
		for (i = 0; i < ac; i++)
		{
			leng = srleng(av[i]);
			for (j = 0; j < leng; j++)
			{
				arr[b] = av[i][j];
				b++;
			}
			arr[b] = '\n';
			b++;
		}
		return (arr);
	}
}
/**
 * srleng - string length
 * @str: argument char
 * Return: int
 */

int srleng(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}
