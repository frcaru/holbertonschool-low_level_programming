#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: input
 * @src: input
 *
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	return (dest);
}
