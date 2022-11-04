#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: the string to be printed
 * @n: the number of int passed to the function
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if (separator == 0)
			separator = "";

		if (i != n - 1)
			printf("%d%s", va_arg(ptr, int), separator);
		else
			printf("%d", va_arg(ptr, int));
		va_end(ptr);
	}
	printf("\n");
}
