/**
 * _isalpha - a function that checks for alphabetic character.
 * Return: 1 if true and 0 if false *
 * @c: is integer
 */

#include "holberton.h"

int _isalpha(int c)
{
	if ((c > 64) && (c < 91))
	{
		return (1);
	}
	else if ((c > 96) && (c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
