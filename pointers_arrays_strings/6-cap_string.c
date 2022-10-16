#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @n: input
 *
 * Return: 0
 */

char *cap_string(char *n)
{
	char sep[] = ",.;!?\"(){} \n\t";
	int i, x;

	for (i = 0; n[i] != '\0'; i++)
	{
		for (x = 0; sep[x] != '\0'; x++)
		{
			if ( n[i] == sep[x] && n[i + 1] >= 'a' && n[i + 1] <= 'z')
				n[i + 1] -= 32;
		}
	}
	return (n);
}
