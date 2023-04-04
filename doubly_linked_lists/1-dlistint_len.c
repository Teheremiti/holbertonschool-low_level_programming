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
