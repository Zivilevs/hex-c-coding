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
	for (; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
