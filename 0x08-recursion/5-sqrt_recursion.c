#include "main.h"

/**
 * _sqrt_recursion -  returns the natural square root of a number
 *
 * @n: the number to be checked
 *
 * Return: the square root of n
*/

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}

	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt_recursion_h(n, 1, n));
}

int _sqrt_recursion_h(int n, int s, int e)
{
	int m = (s + e) / 2;

	if (m * m == n)
	{
		return (m);
	}
	if (s >= e)
	{
		return (-1);
	}
	if (m * m < n)
	{
		return (_sqrt_recursion_h(n, m + 1, e));
	}
	else
	{
		return (_sqrt_recursion_h(n, s, m - 1));
	}
}
