/**
 * is_prime_number - 1 if the input is a prime num, otherwise 0.
 * checkForPrime - recursive funcion for prime
 * @n: integer number
 * @i: integer
 * Return: integer
 * Auth: Zivile V. Silveira
 */

#include "holberton.h"

int checkForPrime(int n, int i);

int is_prime_number(int n)
{
	int i, primeNum;

	i = n / 2;

	primeNum = checkForPrime(n, i);
	return (primeNum);
}

/**
 * checkForPrime - recursive function for prime
 * @n: integer
 * @i: integer
 * Return: integer
 */

int checkForPrime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (i < 1)
	{
		return (0);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (checkForPrime(n, i - 1));
	}
}

