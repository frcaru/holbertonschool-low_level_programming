#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a list
 * @head: the list to free
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
