#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: input
 * @size: array's size
 * @cmp: pointer of function
 *
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int j;

	if (size <= 0)
		return (-1);
	if (array == 0 || cmp == 0)
		return (0);

	for (i = 0; i < size; i++)
	{
		j = cmp(array[i]);
		if (j != 0)
			return (i);
	}
	return (-1);
}
