#include "lists.h"

/**
 * add_dnodeint - Add a new node at the beginning of a dlistint_t list
 *
 * @head: Double pointer to the head of the list
 * @n: New data to assign to the new node
 *
 * Return: A pointer to the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL || head == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;

	*head->prev = newNode;

	return (newNode);
}
