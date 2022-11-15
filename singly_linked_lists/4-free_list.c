#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: the list to free
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current)
	{
		next = current->next;
		free (current);
		current = next;
	}
	head = NULL;
}
