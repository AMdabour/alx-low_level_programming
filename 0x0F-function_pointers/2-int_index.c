#include "function_pointers.h"

/**
 * int_index - a function searches for an integer
 * @array: an array to be checked
 * @size: size of the array
 * @cmp: a pointer to a function to compare
 * Return: the index of first match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (size <= 0)
	{
		return (-1);
	}

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		result = (*cmp)(array[i]);

		if (result != 0)
		{
			return (i);
		}
	}

	return (-1);
}
