#include "main.h"

/**
 *print_numbers - func to print numbers
 *
 * Return: 0
 */

void more_numbers(void)
{

	int c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
			}
			else
			{
				_putchar(c + '0');
			}
		}
			_putchar('\n');
	}
}
