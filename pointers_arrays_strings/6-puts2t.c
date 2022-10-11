#include "main.h"

/**
 * puts2 - prints every other character of a string
 *@str: input
 *
 * Return: 0
 */

void puts2(char *str)

{
	int i = 0;
	char c;

	while (str[i] != '\0')
	{
		c = str[i];

		_putchar(c);
		i+=2;
	}
	_putchar('\n');
}
