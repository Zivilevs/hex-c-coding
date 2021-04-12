/**
 * print_rev - function that prints a string,in reverse,followed by a new line.
 *
 * @s: a pointer to a char
 *
 */

#include "holberton.h"

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	int j;

	j = i - 1;

	while (j >= 0)
	{
		_putchar(*(s + j));
		j--;
	}
	_putchar('\n');
}
