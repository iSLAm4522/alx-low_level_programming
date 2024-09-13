#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of integers.
 *              Each element of the grid is initialized to 0.
 * @width: The width of the grid (number of columns).
 * @height: The height of the grid (number of rows).
 *
 * Return: A pointer to the 2D array of integers, or NULL on failure.
 *         If width or height is 0 or negative, return NULL.
 */

int **alloc_grid(int width, int height)
{
int i, j;

int **grid;

if (width <= 0 || height <= 0)
	return (NULL);
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
	return (NULL);
for (i = 0; i < height; i++)
{
	grid[i] = malloc(sizeof(int) * width);
	if (grid[i] == NULL)
	{
	for (i--; i >= 0; i--)
		free(grid[i]);
	free(grid);
	return (NULL);
	}
}
for (i = 0; i < height; i++)
	for (j = 0; j < width; j++)
	grid[i][j] = 0;

return (grid);
}
