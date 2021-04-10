/**
 * main - fizz buzz
 * fizz_buzz - fizz buzz
 *@i: integer
 * Return: always 0
 */

#include <stdio.h>

void fizz_buzz(int i);

int main(void)
{
	int i  = 1;

	while (i <= 100)
	{
		if (i < 100)
		{
			fizz_buzz(i);
			printf(" ");

		}
		else
		{
			fizz_buzz(i);
			printf("\n");
		}
		i++;
	}
	return (0);
}

/**
 * fizz_buzz - fizz buzz
 *@i: integer
 */

void fizz_buzz(int i)
{
	if (i % 3 == 0 && i % 5 == 0)
	{
		printf("FizzBuzz");
	}
	else if (i % 3 == 0)
	{
		printf("Fizz");
	}
	else if (i % 5 == 0)
	{
		printf("Buzz");
	}
	else
	{
		printf("%d", i);
	}
}
