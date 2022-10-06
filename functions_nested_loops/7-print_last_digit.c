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
		return (n %10);
	else
		return ((n * -1) %10);
}

