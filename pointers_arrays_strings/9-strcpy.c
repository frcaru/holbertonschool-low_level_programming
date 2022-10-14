#include "main.h"

/**
 * _strcpy - copy a string into an other one
 *@dest: input
 *@src: input
 *
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	while (*src++ != '\0')
	{
		*src++ = *dest++;
	}

		return (dest);
}
