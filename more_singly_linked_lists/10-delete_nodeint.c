#include <stddef.h>
#include <stdlib.h>
#include "lists.h"


/**
 * delete_nodeint_at_index - deletes the nth node of a linked list
 * @head: is a list of elements
 * @index: the nth node to delete
 *
 * Return: 1 if it succed -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *copy = *head;
	listint_t *tmp = *head;
	listint_t *prev = *head;
	unsigned int i, j;

	while (copy != 0)
	{
		copy = copy->next;
		j++;
	}
	if (index > j)
		return (-1);

	else if (index == 0)
	{
		*head = (*head)->next;
		tmp->next = NULL;
		free(tmp);
	}

	else
	{
		for (i = 0; i < index - 1; i++)
		{
			prev = prev->next;
		}
		tmp = prev->next;
		prev->next = prev->next->next;
		tmp->next = NULL;
		free(tmp);
	}
	return (1);
}
