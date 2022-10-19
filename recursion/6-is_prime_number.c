#include "main.h"

/**
 * primy - finds out if n a pime number
 * @x: input
 * @i: input
 *
 * Return: 0
 */

int primy(int x, int i)
{
	if (i < x)
	{
		if ((x % i) == 0)
			return (0);
		else
			return (primy(x, i + 1));
	}
	else
		return (1);
}

/**
 * is_prime_number - returns if n is a prime number
 * @n: input
 *
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primy(n, 2));
}
