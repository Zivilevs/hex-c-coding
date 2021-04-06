#include "holberton.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int larger, largest;

	larger = a > b ? a : b;
	largest = larger > c ? larger : c
		;
	return (largest);
}
