#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum value
 * @max: maximal value
 *
 * Return: the pointer to the array
 */

int *array_range(int min, int max)
{
	int *p;
	int i;
	int j;

	j = max - min;

	if (min > max)
		return (0);

	p = malloc(sizeof(int) * (max - min + 1));
	if (p == 0)
	{
		free(p);
		p = 0;
		return (0);
	}

	for (i = 0; i <= j; i++)
		p[i] = min++;
	return (p);
}
