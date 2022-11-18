#include "main.h"

/**
 * flip_bits - return nb bits to change to flip to get from n to m
 * @n: first decimal number to convert into binary
 * @m: 2nd decimal number to convert into binary and compare with the 1st one
 *
 * Return: nb bits to change to flip to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long dif = (n ^ m);
	unsigned long count = 0;

	while (dif)
	{
		dif = dif & (dif - 1);
		count++;
	}
	return (count);
}
