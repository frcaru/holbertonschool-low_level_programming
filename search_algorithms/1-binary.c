#include "search_algos.h"

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
		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);

		else if (array[mid] < value)
			return (binarySearch(array, value, mid + 1, high));

		else if (array[mid] > value)
			return (binarySearch(array, value, low, mid - 1));
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

	return (binarySearch(array, value, low, size));
}

