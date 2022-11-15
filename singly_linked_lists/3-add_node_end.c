#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: is a pointer to the first element of the list
 * @str: is the new element to add
 *
 * Return: the address of the element or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = (malloc(sizeof(list_t)));
	list_t *last = *head;

	if (!node)
		return (0);

	node->str = strdup(str);
	node->len = strlen(str);
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
