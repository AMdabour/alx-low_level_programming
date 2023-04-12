#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the width of the array
 * @height: the height of the array
 * Return: a pointer to a 2 dimenional array oof integers on success
*/

int **alloc_grid(int width, int height)
{
	int *ptr, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = (int *) malloc(width * height * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		j = 0;

		while (j < width)
		{
			*(ptr[i][j]) = 0;
			j++;
		}
	}

	return (ptr);
}
