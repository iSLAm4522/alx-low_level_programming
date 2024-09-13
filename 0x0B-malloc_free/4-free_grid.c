#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees a 2-dimensional grid previously created by alloc_grid.
 * @grid: The 2D array of integers to be freed.
 * @height: The number of rows in the 2D array (grid).
 *
 * Return: Nothing (void).
 */

void free_grid(int **grid, int height)
{
int i = 0;

for (i = 0; i < height; i++)
	free(grid[i]);
free(grid);
}
