#include "main.h"

/**
 *print_square - func to print a square
 *@size:  input
 * Return: 0
 */

void print_square(int size)
{
	int s;
	int q;

	for (s = 0; s < size; s++)
	{
		for (q = 0; q < size; q++)
		{
			if (size > 0)
			{
				_putchar('#');
			}
			else
			{
				_putchar('\n');
			}
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');

}

