/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 * followed by a new line.
 *
 * You can only use _putchar twice in your code.
 */

#include "holberton.h"

void print_alphabet(void)
{
	int letter;

	letter = 97;

	for (; letter < 123; letter++)
	{
		_putchar((char)letter);
	}
	_putchar(10);
}
