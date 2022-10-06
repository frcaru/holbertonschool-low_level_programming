#include "main.h"

/**
 * print_last_digit - func to prints the last digit
 * @n: input
 *
 * Return: 0
 */

int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n = -n;
	_putchar('0' + n);
	return (n);
}

