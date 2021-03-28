/**
 * main - entry point
 * Return: always 0, success
 */

#include <stdio.h>

int main(void)
{
	int sk;

	sk = 0;
	while (sk < 10)
	{
		if (sk < 9)
		{
			putchar('0' + (sk % 10));
			sk++;
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('0' + (sk % 10));
			sk++;
		}
	}
	putchar('\n');
	return (0);
}
