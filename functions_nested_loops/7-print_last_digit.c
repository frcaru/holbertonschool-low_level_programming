#include "main.h"

/**
 * print_last_digit - func to prints the last digit
 * @n: input
 *
 * Return: 0
 */

int print_last_digit(int n)
{
	if (n >= 0)
	{
		n = n % 10;
		_putchar('0' + n);
	}
	else
	{
		n = -1 * n % 10;
		_putchar('0' + n);
	}
	return (0)
}

