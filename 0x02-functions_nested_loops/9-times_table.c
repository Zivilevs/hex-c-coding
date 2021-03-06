/**
 * times_table - a function prints the 9 times table, starting with 0.
 * @decimal:decimal number
 * @last_digit:last digit
 * @po:position number in line
 * Nested WHILE lnd for loops, functions and IF, ternary operator.
 * Return: void
 */

#include "holberton.h"

void print_number(int decimal, int last_digit, int po);

void times_table(void)
{
	int line = 0;

	while (line < 10)
	{
		int p = 1;

		_putchar('0');
		_putchar(',');

		for (; p < 10; p++)
		{
			char decimal, last_digit;
			int m;

			m = p * line;
			last_digit = m % 10;
			decimal = m >= 10 ? m / 10 : ' ';

			print_number(decimal, last_digit, p);
		}
		_putchar('\n');
		line++;
	}
}

/**
 * print_number - a function to print formated number.
 * @decimal:decimal number
 * @last_digit:last digit
 * @po:position number in line
 */

void print_number(int decimal, int last_digit, int po)
{
	if ((decimal != ' ') && (po != 9))
	{
		_putchar(' ');
		_putchar(decimal + '0');
		_putchar(last_digit + '0');
		_putchar(',');
	}
	else if ((decimal == ' ') && (po == 9))
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(last_digit + '0');
	}
	else if (decimal == ' ')
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(last_digit + '0');
		_putchar(',');

	}
	else if (po == 9)
	{
		_putchar(' ');
		_putchar(decimal + '0');
		_putchar(last_digit + '0');

	}
}
