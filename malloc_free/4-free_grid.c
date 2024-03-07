#include "main.h"
#include <stdlib.h>
/**
 *free_grid- frees
 *@grid: grid
 *@height: height
 *
 */
void free_grid(int **grid, int height)
{
	int f;

	for (f = 0; f < height; f++)
	{
		free(grid[f]);
	}
	free(grid);
}
