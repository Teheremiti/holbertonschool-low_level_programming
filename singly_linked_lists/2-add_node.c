#include "lists.h"
#include <string.h>

/**
 * add_node - Add a new node at the beginning of a linked list
 *
 * @head: Double pointer to the head of the list
 * @str: New data for the new node
 *
 * Return: NULL on Failure, a pointer to the new node on success
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL || head == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = *head;

	*head = newNode;

	return (*head);
}
