#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
