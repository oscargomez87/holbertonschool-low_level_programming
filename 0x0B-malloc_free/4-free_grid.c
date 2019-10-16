#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by the alloc_grid function.
 * @grid: array to free
 * @height: size of grid
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
