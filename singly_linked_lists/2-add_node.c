#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: is a pointer to the first element of the list
 * @str: is the new element to add
 *
 * Return: the address of the element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = (malloc(sizeof(list_t)));

	if (!node)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;

	*head = node;
	return (*head);
}
