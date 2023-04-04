#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals of
 * a square matrix of integers
 * @a: the matrix
 *
 * @size: the size to be checked
*/

void print_diagsums(int i*a, int size)
{
	int i;

	long int sum1 = 0;

	long int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
	}

	for (i = 0; i < size; i++)
	{
		sum2 += *(a + i * size + (size - i - 1));
	}

	printf("%ld, %ld\n", sum1, sum2);
}
