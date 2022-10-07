#include "main.h"

/**
 * times_table - func to prints the last digit
 *
 * Return: 0
 */

void times_table(void)
{
	int n;
	int m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			if ((m * n) < 10)
			{
				if (m > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + (n * m));
				if (m != 9)
				{
					_putchar(',');
				}

			}
			else
			{
				_putchar(' ');
				_putchar(((m * n) / 10) + '0');
				_putchar(((m * n) % 10) + '0');
				if (m != 9)
				{
					_putchar(',');
				}

			}
		}
		_putchar('\n');
	}
}
