#include <stdlib.h>

/**
 * free_grid - frees a greed previously created by alloc_grid
 * @grid: pointer to a two dimension array
 * @height: height of the grid
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
