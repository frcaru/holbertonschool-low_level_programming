#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at nth place of the list
 * @head: is a list of element that we want to implemant
 * @idx: is the place where we want to add a node
 * @n: is the value we want to add
 *
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = (malloc(sizeof(listint_t)));
	listint_t *copy = *head;
	listint_t *tmp = *head;
	unsigned int i = 0, j;

	while (copy != 0)
	{
		copy = copy->next;
		i++;
	}
	free(copy);

	if (idx > i || *head == NULL)
		return (NULL);

	else if (idx == 0)
	{
		node->n = n;
		node->next = *head;
		*head = node;
		return (*head);
	}

	else
	{
		for (j = 0; j < idx - 1; j++)
			tmp = tmp->next;
		node->n = n;
		node->next = tmp->next;
		tmp->next = node;
		return (node);
	}
}
