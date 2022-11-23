#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a linked list
 * @head: is a pointer to the first element of the list
 * @n: is the new element to add
 *
 * Return: the address of the element or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = (malloc(sizeof(dlistint_t)));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;
	node->prev = NULL;

	*head = node;
	return (*head);
}
