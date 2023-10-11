#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - search for an element in a sorted array with binary search
 * @array: the array to search in
 * @size: the size of the array
 * @value: the value to search for
 * Return: the index of the value or -1 if it is not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t i;
	size_t high = size - 1;

	if (array)
	{
		while (low <= high)
		{
			size_t mid = low + (high - low) / 2;

			printf("Searching in array: ");

			for (i = low; i < high + 1; i++)
			{
				if (i != high)
					printf("%d, ", array[i]);
				else
					printf("%d\n", array[i]);
			}

			if (array[mid] == value)
			{
				return (mid);
			}
			else if (array[mid] > value)
			{
				high = mid - 1;
			}
			else
			{
				low = mid + 1;
			}
		}
	}

	return (-1);
}
