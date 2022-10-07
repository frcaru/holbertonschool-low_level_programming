#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - func that prints all number from n to 98
 * @n: input
 *
 * Return: 1, 0 or -1
 */

void print_to_98(int n)
{
	while (1)
	{
		if (n > 98)
			n--;
		else
			n++;

		printf("%d", n);
		if (n != 98)
			printf(", ");
		else
			break;
	}
	printf("\n");
}
