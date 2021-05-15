/**
 * _puts_recursion - function that prints a string followed by new line.
 * @s: a pointer to a char
 * *s is value of first element in str, if it is not \0, then print that element
 * and move the pointer to next element s + 1 == *(s + 1).
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
