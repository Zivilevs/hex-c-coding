/**
 * *string_toupper - function that changes all lowercase of a string to uppper.
 * @s: a pointer to a char
 * Return: char
 * Auth: Zivile V. Silveira
 */

#include "holberton.h"

char *string_toupper(char *s)
{
	int i;

	i = 0;

	for (; s[i] != '\0'; i++)
	{
		s[i] = s[i] > 96 && s[i] < 123 ? s[i] - 32 : s[i];

	}
	return (s);
}
