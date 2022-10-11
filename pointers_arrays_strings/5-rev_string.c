#include "main.h"

/**
 * rev_string - prints any string in reverse
 * @s: input
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int i = 0;
	int b = 0;
	char tmp;

	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;

	while (s[i] != s[b])
	{
		tmp = s[b];
		s[b] = s[i];
		s[i] = tmp;
		i--;
		b++;
	}
}
