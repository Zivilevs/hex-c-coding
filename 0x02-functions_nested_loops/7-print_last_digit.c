/**
 * print_last_digit -  a function that prints the last digit of a number.
 * Using _putchar, which basiclly is write().
 * @n: is integer
 * Return: always 0, success
 */

#include "holberton.h"

int print_last_digit(int n)
{
	int a, b;

	if (n < 0)
	{
		a = (n * -1);
	}
	else
	{
		a = n;
	}
	b = (a % 10);
	switch (b)
	{
		case 0:
			_putchar('0');
		break;

		case 1:
			_putchar('1');
		break;

		case 2:
			_putchar('2');
		break;

		case 3:
			_putchar('3');
		break;

		case 4:
			_putchar('4');
		break;

		case 5:
			_putchar('5');
		break;

		case 6:
			_putchar('6');
		break;

		case 7:
			_putchar('7');
		break;

		case 8:
			_putchar('8');
		break;

		case 9:
			_putchar('9');
		break;
	}
	return (b);
}
