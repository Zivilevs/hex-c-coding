 
/**
 * print_square - a function that prints square followed by new line.
 *
 * @size: integer
 * Return: integer
 */

#include "holberton.h"

void print_square(int size)
{
	if (size > 0)
	{
		int i = 0;

		while (i < size)
		{
			int j = 0;

			while (j < size)
			{
				_putchar('#');
				j++;
			}
			i++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
