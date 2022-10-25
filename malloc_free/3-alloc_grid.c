#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - returns a pointer to a pointer
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: the pointer that will be created
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (0);

	p = malloc(sizeof(int*) * height);
	if (p == 0)
	{
		free(p);
		p = 0;
		return (0);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == 0)
		{
			for (; i >= 0; i--)
			{
				free(p[i]);
				p[i] = 0;
			}
			free(p);
			p = 0;
		}
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
