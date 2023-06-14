#include <stdlib.h>

/**
 * free_grid - frees 2d array memory
 * @grid: Pointer to the 2d array
 * @height: rows of the array
 */

void free_grid(int **grid, int height __attribute__((unused)))
{
	int i;

	if (grid == NULL)
		grid = 0;;

	for (i = 0; *(grid + i); i++)
		free(grid[i]);
	free(grid);
}
