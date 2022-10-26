#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the previous pointer
 * @grid: pointer to free
 * @height: input
 *
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
		grid[i] = 0;
	}
	free(grid);
	grid = 0;
}
