#include "lists.h"


/**
 * delete_dnodeint_at_index - deletes the nth node of a linked list
 * @head: is a list of elements
 * @index: the nth node to delete
 *
 * Return: 1 if it succed -1 if not
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *copy = *head;
	dlistint_t *tmp = *head;
	dlistint_t *tmp2 = NULL;
	dlistint_t *prev = *head;
	unsigned int i, j;

	while (copy != 0)
	{
		copy = copy->next;
		j++;
	}
	if (index > j || *head == NULL)
		return (-1);

	else if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
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
		tmp2 = tmp->next;
		tmp2->prev = prev;
		tmp->next = NULL;
		tmp->prev = NULL;
		free(tmp);
	}
	return (1);
}
