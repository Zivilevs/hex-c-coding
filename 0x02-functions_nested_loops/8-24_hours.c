/**
 * jack_bauer - a function prints every minute of the day from 00:00 to 23_59.
 * Nested WHILE loops, functions and IF.
 * @int: hour digit
 * Return: void
 */

#include "holberton.h"

void hour_0_1(int);
void hour_2(int);

void jack_bauer(void)
{
	int hd = 0;

	while (hd < 3)
	{
		if (hd < 2)
		{
			hour_0_1(hd);
			hd++;
		}
		else
		{
			hour_2(hd);
			hd++;
		}
	}
}

/**
 * hour_0_1 - function for hour digit 0 and 1.
 * @hour: hour digit
 */

void hour_0_1(int hour)
{
	int hu = 0;

	while (hu < 10)
	{
		int md = 0;

		while (md < 6)
		{
			int mu = 0;

			while (mu < 10)
			{
				_putchar('0' + hour);
				_putchar('0' + hu);
				_putchar(':');
				_putchar('0' + md);
				_putchar('0' + mu);
				_putchar('\n');
				mu++;
			}
			md++;
		}
		hu++;
	}

}

/**
 * hour_2 - function for hour digit 2.
 * @hour: hour digit
 */

void hour_2(int hour)
{
	int hu = 0;

	while (hu < 4)
	{
		int md = 0;

		while (md < 6)
		{
			int mu = 0;

			while (mu < 10)
			{
				_putchar('0' + hour);
				_putchar('0' + hu);
				_putchar(':');
				_putchar('0' + md);
				_putchar('0' + mu);
				_putchar('\n');
				mu++;
			}
			md++;
		}
		hu++;
	}
}

