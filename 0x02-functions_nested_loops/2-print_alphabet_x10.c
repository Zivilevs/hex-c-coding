/**
 * print_alphabet_x10 - a function that prints 10x times the alphabet,
 * in lowercase, followed by a new line.
 *
 * You can only use _putchar twice in your code.
 */

#include "holberton.h"

void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		int letter;

		letter = 97;
		for (; letter < 123; letter++)
		{
			_putchar((char)letter);
		}
		_putchar(10);
		i++;
	}
}
