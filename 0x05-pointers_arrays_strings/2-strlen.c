/**
 * _strlen - a function that swaps the values of two integers.
 *
 * @s: a pointer to a char
 * Rreturn: string length
 */

#include "holberton.h"
int _strlen(char *s)
{
	int i = 0;


	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);

}
