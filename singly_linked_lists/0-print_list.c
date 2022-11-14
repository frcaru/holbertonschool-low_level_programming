#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: is a list of element that we want to print
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != 0)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
