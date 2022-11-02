#include <stdio.h>

/**
 * main - derefencing pointers
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int *pi;
	char c;
	char *pc;

	i = 1;
	pi = &i;
	c = 'A';
	pc = &c;

	printf("value of i: %d\n", i);
	printf("adress of i: %p\n", &i);
	printf("value of pi: %p\n", pi);
	*pi = 2;
	printf("value of i: %d\n", i);
	printf("value of pi: %p\n", pi);
	printf("value of *pi: %d\n", *pi);

	printf("value of c: %c\n", c);
	printf("adress of c: %p\n", &c);
	printf("value of pc: %p\n", pc);
	*pc = 'B';
	printf("value of c: %c\n", c);
	printf("value of pc: %p\n", pc);
	printf("value of *pc: %d\n", *pc);

	return (0);
}
