/**
 * main - adds 2 positive numbers
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: integer
 * Auth: Zivile V. Silveira
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char **argv)
{
	int result, i;

	result = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (0);
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
