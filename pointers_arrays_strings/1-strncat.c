#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: input
 * @src: input
 * @n: input
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i + j] = src[i];
	}
	return (dest);
}
