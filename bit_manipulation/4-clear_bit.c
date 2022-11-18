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
	unsigned long int cp = *n;
	unsigned int count = 0;
	unsigned long int clearbit = ~(1 << index);

	while (cp)
	{
		cp = cp >> 1;
		count++;
	}

	if (index > count)
		return (-1);

	*n = *n & clearbit;
	return (*n);
}
