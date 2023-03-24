#include "main.h"

/**
 * print_line - print straight line
 *
 * @n: the number of lines to be printed.
*/

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('-');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
