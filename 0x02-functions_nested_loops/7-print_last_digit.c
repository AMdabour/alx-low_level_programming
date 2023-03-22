#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @num: the number to be manibulated.
 *
 * Return: the last digit of a number
*/

int print_last_digit(int num)
{
	_putchar(num % 10 + '0');
	return (num % 10);
}
