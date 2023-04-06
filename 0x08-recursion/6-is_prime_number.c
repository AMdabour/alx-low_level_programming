#include "main.h"

int is_prime(int n, int i);

/**
 * is_prime_number - checks if n is prime number or not
 *
 * @n: the number to be checked
 *
 * Return: result
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (is_prime(n, 2));
}

/**
 * is_prime - checks if n is prime or not
 *
 * @n: the number
 *
 * @i: the current divisor
 *
 * Return: result
*/

int is_prime(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (is_prime(n, i + 1));
}
