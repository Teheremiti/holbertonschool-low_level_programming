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
	list_t *node = NULL;
	int count = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL || h == NULL)
	{
		free(node);
		node = NULL;
		return (0);
	}

	node->str = h->str;
	node->len = h->len;
	node->next = h->next;

	while (node != NULL)
	{
		if (node->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", node->len, node->str);

		node = node->next;
		count++;
	}
	free(node);
	node = NULL;
	return (count);
}
