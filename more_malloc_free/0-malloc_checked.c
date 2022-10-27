#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: input
 *
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(sizeof(int) * b);

	if (p == 0)
	{
		exit(98);
	}
	return (p);
}
