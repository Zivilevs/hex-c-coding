/**
 * _strcat - a function that concatenates two strings.
 *
 * @dest: a pointer to a char
 * @src: a pointer to a char
 * Return: dest char
 */

#include "holberton.h"

char *_strcat(char *dest, char *src)
{
	int i, j, k;

	i = 0;
	j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0')
	{
		j++;
	}
	k = 0;

	for (; k < j; k++)
	{
		*(dest + i + k) = *(src + k);
	}
	*(dest + i + j) = '\0';
	return (dest);
}
