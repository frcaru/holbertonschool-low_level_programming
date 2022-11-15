#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: the list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	if (*head != NULL)
	{
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
	}
	else
		return;
}
