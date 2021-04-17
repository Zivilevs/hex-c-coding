/**
 * _strncpy - a function that copies a string.
 *
 * @dest: a pointer to a char
 * @src: a pointer to a char
 * @n: integer
 * Return: dest char
 * Auth: Zivile V. Silveira
 */

#include "holberton.h"

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	for (; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
