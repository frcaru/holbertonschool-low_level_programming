#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: input
 * @f: pointer to function
 *
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == 0)
		return;

	f(name);
}
