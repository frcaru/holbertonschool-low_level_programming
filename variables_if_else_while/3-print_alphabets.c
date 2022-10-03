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

	char ch1 = 'A';

		for (ch1 = 'A'; ch1 <= 'Z'; ch1++)
			putchar(ch1);
	putchar('\n');

	return (0);
}
