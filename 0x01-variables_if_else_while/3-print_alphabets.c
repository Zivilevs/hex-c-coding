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
		putchar((char)letter);
	}
	letter = 65;
	for (; letter < 91; letter++)
	{
		putchar((char)letter);
	}
	printf("\n");
	return (0);
}
