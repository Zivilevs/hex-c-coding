/**
 * print_last_digit -  a function that prints the last digit of a numberr.
 * @n: is integer
 * Return: always 0, success
 */

#include "holberton.h"

int print_last_digit(int n)
{
	int a;

	a = (n % 10);
	switch (a)
	{
		case 0:
			_putchar('0');
		break;

		case 1:
			_putchar(49);
		break;

		case 50:
			_putchar(50);
		break;

		case 51:
			_putchar(51);
		break;

		case 4:
			_putchar('4');
		break;

		case 53:
			_putchar(53);
		break;

		case 54:
			_putchar(54);
		break;

		case 55:
			_putchar(55);
		break;

		case 8:
			_putchar('8');
		break;

		case 57:
			_putchar(57);
		break;
	}

	return (a);
}
