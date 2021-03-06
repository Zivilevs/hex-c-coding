/**
 * _atoi - function that convert a string to an integer.
 * Return: success 0
 * @s: pointer to char
 *
 */


#include "holberton.h"

int _atoi(char *s)
{
	int i, j, result, sign;

	j = 0;
	i = 0;
	result = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	sign = 1;

	while (j < i)
	{
		if (*(s + j) > 47 && *(s + j) < 58)
		{
			if (*(s + (j - 1)) == '-')
			{
				sign = -1;
			}

			result = result * 10 + (*(s + j) - '0');

			if (*(s + j + 1) == ' ')
			{
				break;
			}
		}
		j++;
	}
	return (result * sign);
}
