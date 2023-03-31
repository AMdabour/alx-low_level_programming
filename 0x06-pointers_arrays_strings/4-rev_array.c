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
	int i, c, j;

	for (i = 0; i < (n / 2); i++)
	{
		c = a[i];
		a[i] = a[(n - i - 1)];
		a[(n - i - 1)] = c;
	}

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}

	_putchar('\n');
}
