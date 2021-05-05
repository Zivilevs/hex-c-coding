/**
 * _strlen_recursion - function that returnes the length of a string.
 * @s: a pointer to a char
 * *s is value of first element in string, if it is \0, then recursive
 * function calls  value of 0, else every time it call itself it
 * returns 1 and accumulate the stack one by one.
 * Auth: Zivile V. Silveira
 */

#include "holberton.h"

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
