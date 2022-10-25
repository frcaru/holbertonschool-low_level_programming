#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: 2nd string
 *
 * Return: a pointer to a newly allocated space containing those two strings
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int size = 0;
	char *s1et2 = 0;

	if (s1 == 0 && s2 == 0)
		return (0);

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	size = i + j + 1;
	s1et2 = malloc(sizeof(char) * size);
	if (s1et2 == 0)
		return (0);

	for (i = 0; s1[i] != '\0'; i++)
	{
		s1et2[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		s1et2[i + j] = s2[j];
	}
	s1et2[i + j] = '\0';
	return (s1et2);
}
