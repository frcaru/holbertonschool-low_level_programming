#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: input
 *
 * Return: 0
 */

char *leet(char *n)
{
	int i, x;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; n[i]; i++)
	{
		for (x = 0; a[x]; x++)
		{
			if (n[i] == a[x])
				n[i] = b[x];
		}
	}
	return (n);
}
