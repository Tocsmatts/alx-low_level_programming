#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free grid
 * @grid: is an int
 * @height: an int
 */
void free_grid(int **grid, int height)
{
	if (height != 0 && grid != NULL)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
