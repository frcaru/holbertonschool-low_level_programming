#include <stdio.h>

/**
 * main - derefencing pointers
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int *pn;

	n = 98;
	pn = &n;

	printf("value of n: %d\n", n);
		printf("adress of n: %p\n", &n);
		printf("value of pn: %p\n", pn);
		*pn = 100;
			printf("value of n: %d\n", n);
}
