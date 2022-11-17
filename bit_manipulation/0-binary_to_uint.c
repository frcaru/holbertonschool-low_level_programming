#include "main.h"

/**
 * binary_to_uint - convert a binary to an unsigned int
 * @b: a string of 0 and 1 chars
 *
 * Return: converted number or 0 if b null or != 0 or 1 char
 */

unsigned int binary_to_uint(const char *b)
{
	int j, i;
	unsigned int res = 0;

	if (b == NULL)
	{
		return (res);
	}

	else
	{
		i = strlen(b) - 1;
		for (j = 1; b[i] != '\0'; i--, j *= 2)
		{

			if (b[i] != '0' && b[i] != '1')
				return (0);

			else if (b[i] == '1')
				res += j;
		}
		return (res);
	}

}
