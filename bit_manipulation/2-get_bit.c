#include "main.h"

/**
 * get_bit - return the value of a bit at a given index
 * @n: the decimal number to convert in binary
 * @index: the place to check !!reverse!!
 *
 * Return: the value of the bit at index place or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int res = 0;
	unsigned long int cp = n;
	unsigned int count = 0;

	while (cp)
	{
		cp = cp >> 1;
		count++;
	}
	if (index > count)
		return (-1);

	res = (n >> index) & 1;
	return (res);
}
