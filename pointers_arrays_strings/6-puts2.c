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
		if (str[i + 1] == '\0')
			break;
		i += 2;
	}
	_putchar('\n');
}
