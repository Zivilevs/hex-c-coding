/**
 * print_numbers -  prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return: integer
 */

#include "holberton.h"

void print_numbers(void)
{
	int i;

	for (i = 49; i < 58; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
