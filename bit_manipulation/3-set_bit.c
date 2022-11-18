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
	unsigned long int cp = *n;
	unsigned int count = 0;
	unsigned long int clearbit = ~(1 << index);
	unsigned long int mask = *n & clearbit;

	while (cp)
	{
		cp = cp >> 1;
		count++;
	}

	if (index > count && *n != 0)
		return (-1);

	*n = mask | (1 << index);
	return (*n);

}
