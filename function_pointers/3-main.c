#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 * @argc: input
 * @argv: input
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int sum, num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	sum = get_op_func(argv[2])(num1, num2);
	printf("%d\n", sum);
	return (0);
}
