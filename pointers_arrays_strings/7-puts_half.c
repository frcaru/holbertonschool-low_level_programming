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
	char c;

	i = (length_of_the_string - 1) / 2;

	while (*(str + i) != '\0')
	{
		c = *(str + i);
		_putchar(c);
		i++;
	}
	_putchar('\n');
}




}
