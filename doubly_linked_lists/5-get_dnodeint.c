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
 * get_dnodeint_at_index - Get the nth node of a dlitsint_t linked list
 *
 * @head: Pointer to the head of the list
 * @index: Index of the node to return
 *
 * Return: The nth node of the list on SUCCESS, otherwise NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i = 0;
	size_t len = dlistint_len(head);

	if (index > len)
		return (NULL);

	if (head == NULL)
		return (NULL);

	for (; i < index; i++)
		node = node->next;

	return (node);
}
