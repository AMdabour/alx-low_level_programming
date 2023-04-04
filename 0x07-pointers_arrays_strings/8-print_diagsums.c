#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals of
 * a square matrix of integers
 * @a: the matrix
 *
 * @size: the size to be checked
*/

void print_diagsums(int *a, int size)
{
	unsigned int i;

	long int sum = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i][i];
	}

	printf("%ld", sum);
	printf(", ");

	for (i = 0; i < size; i++)
	{
		sum = 0;
		sum += a[i][n - 1 - i];
	}

	printf("%ld\n", sum);
}
