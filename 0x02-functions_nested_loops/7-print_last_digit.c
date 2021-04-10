/**
 * print_last_digit -  a function that prints the last digit of a number.
 * Using _putchar, which basiclly is write(). 1. Consider only absolute
 * numbers. 2. modulus for last digit, if n negative think of INT_MIN
 * and avoid overflow. 3. c captures decimal number for ascii character,
 * that _putchar prints to stdout.
 * @n: is integer
 * Return: decimal for ascii character.
 */

#include "holberton.h"

int print_last_digit(int n)
{
	int a, c;
	char b;

	if (n < 0)
	{
		a = ((n + 1) * -1);
		b = ((a % 10) + 1);
	}
	else
	{
		a = n;
		b = (a % 10);
	}

	c = ('0' + b);
	_putchar(c);
	return (b);
}
