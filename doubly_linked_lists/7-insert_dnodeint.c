#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node at a given position
 *
 * @h: Double pointer to the head of the list
 * @idx: Index of the list where the new node should be
 * @n: Data to assign to the new node
 *
 * Return: A pointer to the new node on SUCCESS, otherwise NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *tmp2 = NULL;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	if (*h == NULL && idx != 0)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		if (tmp->next == NULL)
			return (NULL);

		tmp = tmp->next;
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	tmp2 = tmp->next;

	tmp->next = newNode;
	tmp2->prev = newNode;

	newNode->prev = tmp;
	newNode->next = tmp2;

	return (newNode);
}
