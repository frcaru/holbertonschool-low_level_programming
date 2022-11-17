#include "main.h"

/**
 * print_binary - print the binary representation of a number
 * @n: a number to change into binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int cp = n;
	int count = 0;
	unsigned long int mask = 0;

	while (cp)
	{
		cp = cp >> 1;
		count++;
	}

	if (n == 0)
		_putchar('0');

	for (count -= 1; count >= 0; count--)
	{
		mask = 1 << count;

		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
	}
}
