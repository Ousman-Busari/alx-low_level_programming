#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2D array of ints
 * @grid: the grid to be freed
 * @height: height of the grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free(grid[i++]);
	free(grid);
}
