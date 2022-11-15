#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: is a pointer to the first element of the list
 * @n: is the new element to add
 *
 * Return: the address of the element or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = (malloc(sizeof(listint_t)));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;

	*head = node;
	return (*head);
}
