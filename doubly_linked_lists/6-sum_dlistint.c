#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the elements of a list
 * @head: is a list of element that we want to sum
 *
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	if (head == NULL)
		return (0);

	while (head != 0)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
