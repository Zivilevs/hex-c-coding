/**
  * main - entry point
  * Return: always 0, success
  */

#include <stdio.h>

int main(void)
{
	char c;
	int i;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", (long)sizeof(i));
	printf("Size of a long long int: %lld byte(s)\n", (long long)sizeof(i));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	fprintf();
	
	return (0);
}
