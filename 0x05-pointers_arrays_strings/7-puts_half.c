/**
 * puts_half - last half of stringr.
 *
 * @str: a pointer to a char
 *
 */

#include "holberton.h"

void puts_half(char *str)
{
	int j = 0;
	int a;

	while (*(str + j) != '\0')
	{
		j++;
	}
	if (j % 2 == 0)
	{
		a = j / 2;
		for (j = 0; j < a; j++)
		{
			_putchar(*(str + (a + j)));
		}
	}
	else
	{
		a = (j - 1) / 2;
		for (j = 0; j <= a; j++)
		{
			_putchar(*(str + (a + j)));
		}

	}
	_putchar('\n');
}
