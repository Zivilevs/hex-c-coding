/**
 * is_palindrome - 1 if the input is a prime num, otherwise 0.
 * lengthPal - recursive function to calculate length.
 * checkPal - recursive function for palindrome.
 * @len: integer number
 * @i: integer
 * @s: pointer to char
 * Return: integer
 * Auth: Zivile V. Silveira
 */

#include "holberton.h"

int checkPal(char *s, int i, int len);
int lengthPal(char *s);

int is_palindrome(char *s)
{
	int len, i;

	len = lengthPal(s);

	i = 0;
	if (len == 0)
	{
		return (1);
	}
	return (checkPal(s, i, len - 1));
}

/**
 * lengthPal - recursive function to calculate length.
 * @s: pointer to char
 * Return: integer
 */

int lengthPal(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + lengthPal(s + 1));
}

/**
 * checkPal - recursive function for palindrome.
 * @len: integer number
 * @i: integer
 * @s: pointer to char
 * Return: integer
 */

int checkPal(char *s, int i, int len)
{
	if (i  == len)
	{
		return (1);
	}
	if (*(s + i) != *(s + len))
	{
		return (0);
	}
	if (i < len + 1)
	{
		checkPal(s, i + 1, len - 1);
	}
	return (1);
}
