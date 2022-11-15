#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of nodes
 * @h: is a list of elements
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != 0)
	{
		h = h->next;
		i++;
	}
	return (i);
}
