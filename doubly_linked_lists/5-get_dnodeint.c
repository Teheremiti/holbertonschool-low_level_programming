#include "lists.h"

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

	if (head == NULL)
		return (NULL);

	for (; i < index; i++)
		node = node->next;

	return (node);
}
