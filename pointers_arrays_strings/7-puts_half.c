#include "main.h"

/**
 * puts_half - prints half of a string
 *@str: input
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int i = 0;
	int l;

	while (str[i + 1])
		i++;

	l = (i / 2) + 1;

	for (; str[l]; l++)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
