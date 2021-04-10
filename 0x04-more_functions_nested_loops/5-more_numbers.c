/**
 * more_numbers - prints x10 the numbers, from 0 to 14, followed by a new line.
 * @n: integer
 * Return: integer
 */

#include "holberton.h"
void last_digit(int n);

void more_numbers(void)
{
	int j;

	j = 0;
	while (j < 10)
	{
		int i;

		for (i = 0; i < 15; i++)
		{
			if (i < 10)
			{
				last_digit(i);
			}
			else
			{
				int b;

				b = i / 10;
				_putchar(b + '0');
				last_digit(i);
			}
		}
		j++;
		_putchar('\n');
	}
}

/**
 * last_digit - function to print last digit.
 *
 * @n:integer
 */

void last_digit(int n)
{
	int a;

	a = n % 10;
	_putchar(a + '0');
}
