#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list
 * @h: is a list of element that we want to print
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
