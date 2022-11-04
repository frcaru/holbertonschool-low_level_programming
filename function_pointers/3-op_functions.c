#include "3-calc.h"

/**
 * op_add - adds a and b
 * @a: input
 * @b: input
 *
 * Return: the sum
 */

int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
 * op_sub - subtracts a and b
 * @a: input
 * @b: input
 *
 * Return: the sum
 */

int op_sub(int a, int b)
{
	int sum;

	sum = a - b;
	return (sum);
}

/**
 * op_mul - multiplies a and b
 * @a: input
 * @b: input
 *
 * Return: the sum
 */

int op_mul(int a, int b)
{
	int sum;

	sum = a * b;
	return (sum);
}

/**
 * op_div - divides a and b
 * @a: input
 * @b: input
 *
 * Return: the sum
 */

int op_div(int a, int b)
{
	int sum;

	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		sum = a / b;
	return (sum);
}

/**
 * op_mod - modulo a and b
 * @a: input
 * @b: input
 *
 * Return: the sum
 */

int op_mod(int a, int b)
{
	int sum;

	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		sum = a % b;
	return (sum);
}
