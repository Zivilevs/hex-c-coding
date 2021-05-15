/**
 * main - print number of arguments and unused variable
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: integer
 * Auth: Zivile V. Silveira
 */

#include <stdio.h>

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}

