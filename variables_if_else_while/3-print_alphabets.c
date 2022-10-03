#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');

	char CH = 'A';

		for (CH = 'A'; CH <= 'Z'; CH++)
			putchar(CH);
	putchar('\n');

	return (0);
}
