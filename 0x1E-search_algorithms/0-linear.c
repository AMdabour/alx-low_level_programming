#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - searches for an element in an array using linear search
 * @array: the array to search in
 * @size: the siaze of the array
 * @value: the value to search for
 * Return: the index of the value or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}

	return (-1);
}
