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
		if ((o[i] == ',') || (o[i] ==  ';') || (o[i] == '.') || (o[i] == '!') || (o[i] == '?')
					|| (o[i] == '"') || (o[i] == '(') || (o[i] == ')') || (o[i] == '{') || (o[i] == '}')
					|| (o[i] == '\t') || (o[i] == ' ') || (o[i] == '\n') || i == 0)
		{
			if (o[i + 1] >= 'a' && o[i + 1] <= 'z')
			{
				o[i + 1] = o[i + 1] - 32;
			}
		}
	}
	return (o);
}
