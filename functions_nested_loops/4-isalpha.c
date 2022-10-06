#include "main.h"

/**
 * _isalpha - func to check upper character
 * @c: input
 *
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
