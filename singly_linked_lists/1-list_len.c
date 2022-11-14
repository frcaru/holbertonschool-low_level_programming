#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of nodes
 * @h: is a list of elements
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != 0)
	{
		h = h->next;
		i++;
	}
	return (i);
}
