#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a linked list
 * @head: is a pointer to the first element of the list
 * @n: is the new element to add
 *
 * Return: the address of the element or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = (malloc(sizeof(dlistint_t)));
	dlistint_t *last = *head;

	if (!node)
		return (0);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		while ((last->next) != NULL)
			last = last->next;
		last->next = node;
		node->prev = last;
	}
	return (node);
}
