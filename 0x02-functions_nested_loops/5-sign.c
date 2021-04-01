/**
 * print_sign - a function that prints the sign of a number.
 * Return: 1 and prints + if n > 0, 0 and prints 0 if n == 0, returns
 * -1 and prints - if n < 0
 * @n: is integer
 */

#include "holberton.h"

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (1);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
