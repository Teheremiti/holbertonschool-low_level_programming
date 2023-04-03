#include "lists.h"

/**
 * print_list - Print all the elements of a list_t list
 *
 * @h: Pointer to an element of list_t
 *
 * Return: The number of nodes
 * Format: [len] <h->str>
 */

size_t print_list(const list_t *h)
{
	size_t count = 1;

	if (h == NULL)
		return (0);

	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);

	if (h->next != NULL)
		count += print_list(h->next);

	return (count);
}
