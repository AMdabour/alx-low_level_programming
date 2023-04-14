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

	int i, len;

	if (min > max)
		return (NULL);

	len = max - min - 1;

	ptr = malloc(sizeof(int) * len);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		ptr[i] = min++;
	}

	return (ptr);
}
