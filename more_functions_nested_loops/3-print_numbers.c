#include "main.h"

/**
 *print_numbers - func to print numbers
 *
 * Return: 0
 */

void print_numbers(void)
{
	int ch = 0;

	for (ch = 0; ch <= 9; ch++)
	{
		_putchar('0' + ch);
	}
	_putchar('\n');
}
