#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>

/**
 * get_op_func - select the correct function to perform the operation
 * @s: the operator passed as arguments
 *
 * Return: a function pointer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int j = 0;

	while (ops[j].op != NULL)
	{
		if (strcmp(s, ops[j].op) == 0)
			return (ops[j].f);
		j++;
	}
	printf("Error\n");
	exit(99);
}
