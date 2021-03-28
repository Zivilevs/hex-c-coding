/**
 * main - entry point
 * Return: always 0, success
 */

#include <stdio.h>

int main(void)
{
	int letter;

	letter = 122;
	for (; letter > 96; letter--)
	{
		putchar((char)letter);
	}
	printf("\n");
	return (0);
}
