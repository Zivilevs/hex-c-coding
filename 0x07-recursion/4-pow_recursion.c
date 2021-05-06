/**
 * _pow_recursion - returns the valiue of x raised to the power of y.
 * @x: integer number
 * @y: integer number
 * Return: integer
 * Auth: Zivile V. Silveira
 */

#include "holberton.h"

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);

	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
