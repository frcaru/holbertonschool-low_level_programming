#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at nth place of the list
 * @h: is a list of element that we want to implemant
 * @idx: is the place where we want to add a node
 * @n: is the value we want to add
 *
 * Return: the address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = (malloc(sizeof(dlistint_t)));
	dlistint_t *cpcount = *h;
	dlistint_t *tmpp = *h;
	dlistint_t *tmpn = NULL;
	unsigned int j, i = 0;

	if (h == NULL && idx > 0)
		return (NULL);
	if (node == NULL)
		return (NULL);

	while (cpcount != 0)
	{
		cpcount = cpcount->next;
		i++;
	}
	free(cpcount);

	if (idx > i)
		return (NULL);
	else if (idx == 0)
	{
		node->prev = NULL;
		node->n = n;
		node->next = *h;
		if (*h != NULL)
			(*h)->prev = node;
		*h = node;
	}

	else
	{
		for (j = 0; j < idx - 1; j++)
			tmpp = tmpp->next;
		node->n = n;
		tmpn = tmpp->next;
		tmpp->next = node;
		tmpn->prev = node;
		node->next = tmpn;
		node->prev = tmpp;
	}
	return (node);
}
