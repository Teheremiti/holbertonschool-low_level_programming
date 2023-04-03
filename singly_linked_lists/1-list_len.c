#include "lists.h"

/**
 * list_len - Return the number of elements in a linked list_t list
 *
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */

size_t list_len(const list_t *h)
{
	list_t *node = malloc(sizeof(list_t));
	int count = 0;

	if (node == NULL || h == NULL)
	{
		free(node);
		node = NULL;
		return (0);
	}

	node->next = h->next;
	while (node != NULL)
	{
		count++;
		node = node->next;
	}

	free(node);
	node = NULL;
	return (count);
}
