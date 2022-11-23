#include "lists.h"

/**
 * dlistint_len - returns the number of nodes
 * @h: is a list of elements
 *
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != 0)
	{
		h = h->next;
		i++;
	}
	return (i);
}
