#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: input
 * @n: input
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int f;

	for (f = 0; f < n; f++)
	{
		n--;
		tmp = a[f];
		a[f] = a[n];
		a[n] = tmp;
	}
}
