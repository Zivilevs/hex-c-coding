/**
 * main - entry point
 * Return: always 0, success
 */

#include <stdio.h>

int main(void)
{
	int letter;

	letter = 97;
	for (; letter < 123; letter++)
	{
		if ((letter == 101) || (letter == 113))
		{
		continue;
		}
		else
		{
			putchar((char)letter);
		}
	}
	printf("\n");
	return (0);
}
