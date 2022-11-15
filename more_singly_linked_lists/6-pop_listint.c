#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delete the 1st node of a linked list
 * @head: is a pointer to the first element of the list
 *
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;

	if (head == NULL)
		return (0);

	*head = (*head)->next;
	return (tmp->n);
	free(tmp);
	tmp = NULL;

}
