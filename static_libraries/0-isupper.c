#include "main.h"

/**
 * _isupper - func to return if upper char or no
 *@c : input
 *
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
}
	else
	{
		return (0);
	}
}