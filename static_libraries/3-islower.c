#include "main.h"

/**
 * _islower - func to check lower character
 * @c: input
 *
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
