/**
 * _abs - a function that computes the absolute value of an integer.
 * @n: is integer
 * Return: always 0, success
 */

#include "holberton.h"

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else if ((n == 1) || (n == -1))
	{
		int a;

		a = n * n;
		return (a);
	}
	else
	{
		int a;

		a = (n * -1);
		return (a);
	}
}
