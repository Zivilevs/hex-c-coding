/**
 * cap_string - function that capitalize all words of a string.
 * @o: a pointer to a char
 * Return: char
 * Auth: Zivile V. Silveira
 */

#include "holberton.h"

char *cap_string(char *o)
{
	int i;

	i = 0;

	for (; *(o + i) != '\0'; i++)
	{
		if (i == 0)
		{
			if (o[i] >= 'a' && o[i] <= 'z')
			{
				o[i] = o[i] - 32;
				continue;
			}
		}

		if ((o[i] == ',') || (o[i] ==  ';') || (o[i] == '.') || (o[i] == '!') || (o[i] == '?')
					|| (o[i] == '"') || (o[i] == '(') || (o[i] == ')') || (o[i] == '{') || (o[i] == '}')
					|| (o[i] == '\t') || (o[i] == ' ') || (o[i] == '\n'))
		{
			if (o[i + 1] >= 'a' && o[i + 1] <= 'z')
			{
				o[i + 1] = o[i + 1] - 32;
			}
		}
	}
	return (o);
}
