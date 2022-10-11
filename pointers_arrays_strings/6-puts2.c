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
		if (str[i + 1])
		{
			c = str[i + 1];
			_putchar(c);
			i++;
		}
		i++;
	}
	_putchar('\n');
}
