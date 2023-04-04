#include "lists.h"

/**
 * print_dlistint - Print all the elements of a dlistint_t list
 *
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 1;

	if (h == NULL)
		return (0);

	printf("%d\n", h->n);

	if (h->next != NULL)
		count += print_dlistint(h->next);

	return (count);
}
