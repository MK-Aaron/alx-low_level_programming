#include <stdlib.h>

/**
 * free_grid - frees 2d array memory
 * @grid: Pointer to the 2d array
 * @height: rows of the array
 */

void free_grid(int **grid, int height)
{
	int i;


	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
