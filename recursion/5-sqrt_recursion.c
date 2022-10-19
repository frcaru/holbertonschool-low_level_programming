#include "main.h"

/**
 * _sqrt_recursion - returns the square root of n
 * @n: input
 *
 * Return: 0
 */
int funcmarine(int x, int y)
{
	if ((y * y) == x)
		return (y);
	if ((y * y) < x)
		return funcmarine(x, y + 1);
	if (y > x)
		return (-1);
	return (-1);

}

int _sqrt_recursion(int n)
{
	return funcmarine(n, 1);
}
