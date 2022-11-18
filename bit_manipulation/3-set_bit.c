#include "main.h"

/**
 * set_bit - set the value of a bit at 1 at a given index
 * @n: the decimal number to convert in binary
 * @index: the place to change the bit
 *
 * Return: 1 if it worked, -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int count = 32;
	unsigned long int clearbit = ~(1 << index);
	unsigned long int mask = *n & clearbit;

	if (n[0] == 0)
		return (-1);
	if (index > count)
		return (-1);

	*n = mask | (1 << index);
	return (1);

}
