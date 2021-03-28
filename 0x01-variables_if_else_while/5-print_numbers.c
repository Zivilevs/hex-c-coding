/**
 * main - entry point
 * Return: always 0, success
 */

#include <stdio.h>

int main(void)
{
	int sk;

	sk = 0;
	for (; sk < 10; sk++)
	{
		printf("%d", sk);
	}
	printf("\n");
	return (0);
}
