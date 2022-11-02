#include <stdio.h>

/**
 * main - printing the value and the adress of n
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int *pn;

	n = 98;
	pn = &n;

	printf("the adress of n is: %p\n", &n);
	printf("the value of his pointer is: %p\n", pn);

	return (0);
}
