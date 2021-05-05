/**
 * factorial - returns the factorial of any given number.
 * @n: integer number
 * Return: integer
 * *s is value of first element in string, if it is \0, then recursive
 * function calls  value of 0, else every time it call itself it
 * returns 1 and accumulate the stack one by one.
 * Auth: Zivile V. Silveira
 */

#include "holberton.h"

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
