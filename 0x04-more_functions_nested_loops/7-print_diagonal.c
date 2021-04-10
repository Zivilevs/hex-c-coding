/**
 * print_diagonal - a function that draws a diagonal line in the terminal.
 *
 * @s: integer
 * Return: integer
 */

#include "holberton.h"

void print_space(int s);

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			if (i == 0)
			{
				_putchar('/');
			}
			else
			{
				print_space(i);
				_putchar('/');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

/**
 * print_space - print n spaces.
 *@s: integer
 */

void print_space(int s)
{
	for (int i = 0; i < s; i++)
	{
		_putchar(' ');
	}
}
