/**
 * _isdigit  - check for a digit (0-9).
 *@c: integer
 * Return: 0 or 1
 */

#include "holberton.h"

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}
