#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: input
 *
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int size = 0;
	char *s1et2 = 0;

	for (i = 0; s1 != NULL && s1[i] != '\0'; i++)
		;
	for (j = 0; s2 != NULL && s2[j] != '\0'; j++)
		;

	size = i + n;
	s1et2 = malloc(sizeof(char) * size + 1);
	if (s1et2 == 0)
		return (0);

	for (i = 0; s1[i] != '\0'; i++)
	{
		s1et2[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		s1et2[i] = s2[j];
		i++;
	}
	s1et2[i] = '\0';
	return (s1et2);
}
