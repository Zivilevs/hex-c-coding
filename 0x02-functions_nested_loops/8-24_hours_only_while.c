/**
 * jack_bauer - a function prints every minute of the day from 00:00 to 23_59.
 * Nested WHILE loops and IF.
 *
 * Return: void
 */

#include "holberton.h"

void jack_bauer(void)
{

	int hd = 0;

	while (hd < 3)
	{
		if (hd < 2)
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
						_putchar('0' + hd);
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
			hd++;
		}
		else
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
						_putchar('0' + hd);
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
			hd++;
		}
	}
}
