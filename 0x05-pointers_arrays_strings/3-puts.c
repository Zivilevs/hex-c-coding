/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 *
 * @str: a pointer to a char
 *
 */

#include "holberton.h"
void _puts(char *str)
{
	int i = 0;


	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
