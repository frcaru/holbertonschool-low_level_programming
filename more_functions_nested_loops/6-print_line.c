#include "main.h"

/**
 *print_line - func to print a straight line
 *@n:  input
 * Return: 0
 */

void print_line(int n)
{
	int i;


	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
