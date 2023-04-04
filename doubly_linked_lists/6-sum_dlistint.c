#include "lists.h"

/**
 * sum_dlistint - Sum all the data of a dlistint linked list
 *
 * @head: Pointer to the head of the list
 *
 * Return: The sum of all the elements of the list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
