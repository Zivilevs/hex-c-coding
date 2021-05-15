/**
 * main - multiplies 2 numbers.
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: integer
 * Auth: Zivile V. Silveira
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}

	int result;

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
