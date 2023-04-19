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
	int i;

	if (array == NULL || cmp == NULL)
		return;

	if (size <= 0)
		return (-1);

	for (i = 0; i< size; i++)
	{
		cmp(array[i]);
	}

	return (i);
}
