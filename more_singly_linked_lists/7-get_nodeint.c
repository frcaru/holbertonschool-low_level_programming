#include <stddef.h>
#include "lists.h"


/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: is a list of elements
 * @index: the nth node to print
 *
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *copy = head;
	unsigned int i, j;

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
