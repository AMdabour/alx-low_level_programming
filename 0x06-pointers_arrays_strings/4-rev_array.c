#include "main.h"

/**
 * reverse_array - reverse array of integers
 *
 * @a: array of integers
 *
 * @n: number of elements of the array
*/

void reverse_array(int *a, int n)
{
	int i, c = n;

	for (i = 0; i < n; i++)
	{
		c--;
		print_number(a[c]);

		if (c != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
	}

	_putchar('\n');
}
