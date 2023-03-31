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
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		print_number(a[i]);

		if (i != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
	}

	_putchar('\n');
}
