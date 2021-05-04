/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: a pointer to a char
 * *s is value of first element in string, if it is not \0, then recursive
 * function calls itself with the next. When reaches \0, prints out the
 * accumulated stack one by one.
 * Auth: Zivile V. Silveira
 */

#include "holberton.h"

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
