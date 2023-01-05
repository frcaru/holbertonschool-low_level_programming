#include "search_algos.h"

/**
 * linear_search - searches a value in an array of
 *                 int using the linear search
 * @array: array of int
 * @size: size of the array
 * @value: the value to search for in the array
 *
 * Return: the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
