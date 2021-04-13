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
	int a, i;

	while (*(str + j) != '\0')
	{
		++j;
	}
	if (j % 2 == 0)
	{
		a = j / 2;
		i = 0;
		while (*(str + (a + i)) != '\0')
		{
			_putchar(*(str + (a + i)));
			i++;
		}
	}
	else
	{
		a = j / 2;
		i = 0;
		while (*(str + (a + 1 + i)) != '\0')
		{
			_putchar(*(str + (a + 1 + i)));
			i++;
		}
	}
	_putchar('\n');
}
