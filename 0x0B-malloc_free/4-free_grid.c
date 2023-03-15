#include "main.h"
#include <stdlib.h>

/**
 * free_grid - This function fres the memory of the previously
 * allocated malloc memory
 * @grid: An input 2D array of integers to free
 * @height: height of grid
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
	{
		return;
	}

	while (i < height)
	{
		free((int *)grid[i++]);
	}
	free(grid);
}

