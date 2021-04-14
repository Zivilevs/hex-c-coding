/**
 * _strcpy - function that copies the string pointed to by src,
 *  including the terminating null byte (\0), to the buffer pointed to by dest.
 * Return: the pointer to dest
 * @dest: pointer to dest
 * @src: pointer to source
 * FYI: The standard library provides a similar function: strcpy.
 */

#include <stdio.h>
#include "holberton.h"

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}

	*(dest + i + 1) = *(src + i + 1);

	return (dest);
}
