#include "main.h"

/**
 * _sqrt_recursion -  returns the natural square root of a number
 *
 * @n: the number to be checked
 *
 * Return: the square root of n
*/

int _sqrt_recursion(long int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}

	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt_recursion_h(n, 0));
}

/**
 * _sqrt_recursion_h - helper function
 *
 * @n: the number
 * @i: result to be checked
 * Return: result
*/

int _sqrt_recursion_h(long int n, int i)
{
	if (i *i > n)
	{
		return (-1);
	}

	if (i * i == n)
	{
		return (i);
	}

	return (_sqrt_recursion_h(n, i + 1));
}
