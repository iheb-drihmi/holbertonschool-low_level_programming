#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid -  a function that frees a 2 dimensional grid previously
 * @grid: The grid
 * @height: The height
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}