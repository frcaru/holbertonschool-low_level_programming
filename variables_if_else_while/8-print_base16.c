#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char ch = '0';
	char CH = 'a';

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);

	for (CH = 'a'; CH <= 'f'; CH++)
		putchar(CH);
	putchar('\n');

	return (0);
}
