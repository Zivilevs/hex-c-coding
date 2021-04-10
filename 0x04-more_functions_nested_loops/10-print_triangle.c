/**
 * print_triangle - a function that prints a triagle, followed by new line.
 *
 * @sp: integer
 */

#include "holberton.h"

void print_space(int sp);
void print_hash(int h);

void print_triangle(int size)
{
	if (size > 0)
	{
		int i = 1;

		for (; i <= size; i++)
		{
			print_space(size - i);
			print_hash(i);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

/**
 * print_hash - print n hashes.
 *@h: integer
 */

void print_hash(int h)
{
	int i = 0;

	for (; i < h; i++)
	{
		_putchar('#');
	}

}

/**
 * print_space - print spaces.
 * @sp: integer
 */

void print_space(int sp)
{
	int i = 0;

	for (; i < sp; i++)
	{
		_putchar(' ');
	}
}
