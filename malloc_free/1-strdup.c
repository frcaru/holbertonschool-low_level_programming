#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies a string in a pointer newly allocated
 * @str: pointer
 *
 * Return: the pointer
 */

char *_strdup(char *str)
{
	int i;
	char *c;

	for (i = 0; str[i] != '\0'; i++)
	;

	c = malloc(sizeof(char) * i);
	if (c == 0)
		return (0);
	
	for (i = 0; str[i] != '\0'; i++)
		c[i] = str[i];
	c[i] = '\0';

	return (c);
}




