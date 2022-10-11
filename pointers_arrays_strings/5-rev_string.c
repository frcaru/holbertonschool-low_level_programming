#include "main.h"

/**
 * rev_string - prints any string in reverse
 * @s: input
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int i = 0;
	int z;
	int tmp;

	while (s[i] != '\0')
	{
		i++;
	}

	for (z = 0; i >= z; i-- && z++)
	{
	int *i;
	int *z;

		tmp = *i;
		*i = *z;
		*z = tmp;

	}
}
