#include <stdlib.h>

/**
 * free_grid - print a grid of integers.
 *
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: a pointer to the string or NULL
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);

}
