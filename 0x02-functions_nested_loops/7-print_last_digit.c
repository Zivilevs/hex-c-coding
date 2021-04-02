/**
 * print_last_digit -  a function that prints the last digit of a number.
 * Using _putchar, which basiclly is write(). 1. only absolute numbers.
 * 2. modulus for last digit. 3. c captures decimal number for ascii character,
 * that _putchar prints to stdout.
 * @n: is integer
 * Return: decimal for ascii character.
 */

#include "holberton.h"

int print_last_digit(int n)
{
	int a, b, c;

	if (n < 0)
	{
		a = (n * -1);
	}
	else
	{
		a = n;
	}
	b = (a % 10);
	c = (b + '0');
	_putchar(c);
	return (b);
}
