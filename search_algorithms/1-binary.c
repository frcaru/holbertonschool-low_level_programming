#include "search_algos.h"

/**
 * print_array - prints a partition of an array
 * @array: an array of sorted int
 * @low: the lowest index of the array from where to print
 * @high: the higher index of the array to print
 *
 * Return: /
 */

void print_array(int *array, int low, int high)
{
	printf("Searching in array: ");

	for (;low < high - 1; low++)
		printf("%d, ", array[low]);

	printf("%d\n", array[low]);
}

/**
 * binarySearch - searches for a value in a sorted array
 *                 of int using the binary search
 * @array: an array of sorted int
 * @value: value to search for in the array
 * @low: the lowest index of the array to serch in
 * @high: size of the array and after the higher index
 *       of the array to search in
 * Return: the index where value is located
 */


int binarySearch(int *array, int value, size_t low, size_t high)
{
	size_t mid = 0;

	if (low >= high)
		return (-1);

	else
	{
		print_array(array, low, high);
		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);

		else if (array[mid] < value)
		{
//			print_array(array, mid + 1, high);
			return (binarySearch(array, value, mid + 1, high));
		}

		else if (array[mid] > value)
		{
//			print_array(array, low, mid - 1);
			return (binarySearch(array, value, low, mid - 1));
		}

		else
			return (-1);
	}
}
/**
 * binary_search - searches for a value in a sorted array
 *                 of int using the binary search
 * @array: an array of sorted int
 * @size: size of the array
 * @value: value to search for in the array
 *
 * Return: the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;

	if (array == NULL)
		return (-1);

	return (binarySearch(array, value, low, size));
}

