#include "main.h"

/**
 * print_sign - print the sign of the number
 *
 * @n: the number to check.
 *
 * Return: 1 in case of positive , 0 if zero , -1 if negative
*/

int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
		return (1);
	else if (n == 0)
		_putchar('0');
		return (0);
	else if (n < 0)
		_putchar('-');
		return (-1);
}
