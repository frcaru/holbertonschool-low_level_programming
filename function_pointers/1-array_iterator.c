#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: input
 * @size: array's size
 * @action: pointer of function
 *
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == 0 || size == 0 || action == 0)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
