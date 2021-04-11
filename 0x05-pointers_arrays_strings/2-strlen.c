/**
 * _strlen - a function that returns the length of string.
 *
 * @s: a pointer to a char
 * Return: string length
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
