/**
 * _puts_recursion - function that prints a string followed by new line.
 * @s: a pointer to a char
 *
 * Auth: Zivile V. Silveira
 */

#include "holberton.h"

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
