#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals of
 * a square matrix of integers
 * @a: the matrix
 *
 * @size: the size to be checked
*/

void print_diagsums(int **a, int size)
{
	int i;

	long int sum1 = 0;

	long int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i][i];
	}

	printf("%ld", sum1);
	printf(", ");

	for (i = 0; i < size; i++)
	{
		sum2 += a[i][size - 1 - i];
	}

	printf("%ld\n", sum2);
}
