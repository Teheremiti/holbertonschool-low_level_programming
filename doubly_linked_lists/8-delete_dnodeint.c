#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete the node at a given index
 *
 * @head: Double pointer to the head of the list
 * @index: Index of the node to delete
 *
 * Return: 1 on SUCCESS, otherwise -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	dlistint_t *left = NULL;
	dlistint_t *right = NULL;

	if (head == NULL)
		return (-1);

	for (; index > 0; index--)
	{
		if (tmp->next == NULL)
			return (-1);

		tmp = tmp->next;
	}

	left = tmp->prev;
	right = tmp->next;

	if (tmp->prev == NULL)
	{
		right->prev = NULL;
		*head = right;
		free(tmp);
		tmp = NULL;
	}
	else if (tmp->next == NULL)
	{
		left->next = NULL;
		free(tmp);
		tmp = NULL;
	}
	else
	{
		left->next = right;
		right->prev = left;
		free(tmp);
		tmp = NULL;
	}

	return (1);
}
