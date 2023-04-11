#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_gridx - frees 2d array
 * @gridx: 2d grid
 * @heightx: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
 */
void free_gridx(int **gridx, int heightx)
{
	int ix;

	for (ix = 0; ix < height; ix++)
	{
		free(grid[ix]);
	}
	free(gridx);
}

