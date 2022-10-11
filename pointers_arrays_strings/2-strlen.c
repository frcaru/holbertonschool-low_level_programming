#include "main.h"

/**
 * _strlen - returns the lenght of a string
 *
 *@s: input
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
