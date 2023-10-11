#include "search_algos.h"
#include <stdio.h>

/**
 * recursive_binary - recursive binary search
 * @array: the array to search in
 * @low: the first index in the array
 * @high: the last index in the array
 * @value: the value to search for
 * Return: the index of the value or -1
 */
int recursive_binary(int *array, size_t low, size_t high, int value)
{
	size_t i;

	if (high >= low)
	{
		size_t mid = low + (high - low) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i != high)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		if (array[mid] == value && array[mid - 1] != value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			return (recursive_binary(array, mid + 1, high, value));
		}
		else
		{
			return (recursive_binary(array, low, mid, value));
		}
	}

	return (-1);
}

/**
 * advanced_binary - do binary search with recursion
 * @array: the array to search in
 * @size: the size of the array
 * @value: the value to search for
 * Return: the idx of the value or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array && size)
	{
		return (recursive_binary(array, 0, size - 1, value));
	}

	return (-1);
}
