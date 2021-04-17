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
	int a;

	a = s1[0] - s2[0];
	
	return (a);
}
