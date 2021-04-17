/**
 * _strcmp - a function that compares two strings.
 *
 * @s1: a pointer to a char
 * @s2: a pointer to a char
 * Return: integer
 * Auth: Zivile V. Silveira
 */

#include "holberton.h"

int _strcmp(char *s1, char *s2)
{
	int i, a;

	i = 0;
	a = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			a = s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (a);
}
