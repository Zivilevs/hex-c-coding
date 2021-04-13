/**
 * puts2 - every other char.
 *
 * @str: a pointer to a char
 *
 */

#include "holberton.h"

void puts2(char *str)
{
	int j = 0;

	while (*(str + j) != '\0')
	{
		if (j % 2 == 0)
		{
			_putchar(*(str + j));
		}
		j++;
	}
	_putchar('\n');
}
