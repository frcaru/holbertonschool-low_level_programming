#include "main.h"

/**
 *print_most_numbers - func to print numbers with exception
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int ch = 0;


	for (ch = 0; ch <= 9; ch++)
	{
	if (ch != 2 && ch != 4)
		_putchar('0' + ch);
	}
	_putchar('\n');
}
