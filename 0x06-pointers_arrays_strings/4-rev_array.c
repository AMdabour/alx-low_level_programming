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
	int i, c;

	for (i = 0; i < (n / 2); i++)
	{
		c = a[i];
		a[i] = a[(n - i - 1)];
		a[(n - i - 1)] = c;
	}
}
