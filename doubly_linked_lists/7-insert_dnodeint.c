#include "lists.h"

/**
 * dlistint_len - Return the number of nodes in a dlistint list
 *
 * @h: Pointer to the head of the list
 *
 * Return: The len of the dlistint list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	count++;
	if (h->next != NULL)
		count += dlistint_len(h->next);

	return (count);
}


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
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	unsigned int i = 0;
	unsigned int len = dlistint_len(*h);

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	if (h == NULL || idx > len)
		return (NULL);

	if (idx == 0)
		return ((add_dnodeint(h, n)));

	else if (idx == len)
		return (add_dnodeint_end(h, n));

	for (; i < idx - 1; i++)
		tmp = tmp->next;

	newNode->n = n;
	newNode->prev = tmp;
	newNode->next = tmp->next;

	tmp->next = newNode;

	return (newNode);
}
