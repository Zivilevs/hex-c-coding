/**
 * print_most_numbers - prints the numbers, 01356789, followed by a new line.
 *
 * Return: integer
 */

#include "holberton.h"

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}

		_putchar(i);
	}

	_putchar('\n');
}
