#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: input
 * @argv: input
 * Return: 0
 */

int main(int argc, char **argv)
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
		return (0);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
}
