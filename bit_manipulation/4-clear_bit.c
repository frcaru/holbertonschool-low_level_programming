#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: decimal number to convert into binary
 * @index: the place to change the bit
 *
 * Return: 1 if it workedd, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int count = 32;
	unsigned long int clearbit = ~(1 << index);

	if (index > count)
		return (-1);

	*n = *n & clearbit;
	return (1);
}
