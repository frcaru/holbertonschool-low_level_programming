#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: is a pointer to the first element of the list
 * @n: is the new element to add
 *
 * Return: the address of the element or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = (malloc(sizeof(listint_t)));
	listint_t *last = *head;

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
	}
	return (node);
}
