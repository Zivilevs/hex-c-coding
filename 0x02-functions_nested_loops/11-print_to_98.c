/**
 * print_to_98 - a function that prints all
 * natural numbers from n to 98.
 * @n:number
 * Return: 
 */

#include "holberton.h"
#include <stdio.h>

void print_to_98(int n)
{
	for (; n <=98; n++)
	{	
		n < 98 ? printf("%d, ", n):
			printf("%d\n", n);
	}

}

