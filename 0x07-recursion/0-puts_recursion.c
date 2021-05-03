/**
 * _puts_recursion - function that prints a string followed by new line.
 * @s: a pointer to a char
 *
 * Auth: Zivile V. Silveira
 */

#include "holberton.h"

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	for (; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
