#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between the string
 * @n: the number of strings passed to the function
 *
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	if (separator == 0)
		return;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		if (ptr == 0)
			printf("(nil)");

		if (i != n - 1)
			printf("%s%s", va_arg(ptr, char *), separator);
		else
			printf("%s", va_arg(ptr, char *));
	}
	va_end(ptr);
	printf("\n");
}
