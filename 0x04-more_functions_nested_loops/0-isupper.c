/**
 * _isupper  - check for uppercase characters.
 *@c: character
 * Return: 0 or 1
 */

#include "holberton.h"

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}
