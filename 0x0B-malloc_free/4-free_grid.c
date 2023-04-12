#include "main.h"

/**
 * free_grid - free previously created array
 * @grid: the array to be free
 * @height: the number of rows in the array
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
