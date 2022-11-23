#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: is a list of elements
 * @index: the nth node to print
 *
 * Return: the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *copy = head;
	unsigned int i, j = 0;

	while (copy != 0)
	{
		copy = copy->next;
		j++;
	}

	if (index > j)
		return (NULL);

	else
	{
	for (i = 0; i < index; i++)
		head = head->next;
	return (head);
	}
}
