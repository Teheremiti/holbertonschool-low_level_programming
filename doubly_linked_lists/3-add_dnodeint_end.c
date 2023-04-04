#include "lists.h"

/**
 * add_dnodeint_end - Add a new node at the end of a dlistint_t list
 *
 * @head: Double pointer to the head of the list
 * @n: New data to assign to the new node
 *
 * Return: A pointer to the new element on SUCCESS, otherwise NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = *head;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (node == NULL)
		*head = newNode;

	else
	{
		while (node->next != NULL)
			node = node->next;

		newNode->prev = node;
		node->next = newNode;
	}

	return (newNode);
}
