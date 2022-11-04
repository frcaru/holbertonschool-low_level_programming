#ifndef MAIN_H
#define MAIN_H
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds a and b
 * op_sub - subtracts a and b
 * op_mul - multiplies a and b
 * op_div - divides a and b
 * op_mod - modulo a and b
 * @a: input
 * @b: input
 *
 * Return: the sum
 */

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * get_op_func - main
 * @s: input
 *
 * Return: the sum
 */

int (*get_op_func(char *s))(int, int);

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 * @a: input
 * @b: input
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif
