#include "main.h"

/**
 *print_triangle - func to print a triangle
 *@size:  input
 * Return: 0
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{

		for (i = 0; i < size; i++)
		{
			for (j = (size - 1 - i); j > 0; j--)
			{
				_putchar(' ');
			}
			for (j = 0; j <= i; j++)
			{
				_putchar('#');
			}
				_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
