#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: a pointer to the array
*/
int *array_range(int min, int max)
{
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = (int *) malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
