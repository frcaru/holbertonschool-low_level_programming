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
    char *p;

    va_start(ptr, n);

    for (i = 0; i < n; i++)
    {
      p = va_arg(ptr, char *);
      
        if (separator == 0)
            separator = "";

        if (i != n - 1)
            printf("%s%s", p, separator);
        else if (p == NULL)
            printf("(nil)");
        else
            printf("%s", p);
    }
    va_end(ptr);
    printf("\n");
}
