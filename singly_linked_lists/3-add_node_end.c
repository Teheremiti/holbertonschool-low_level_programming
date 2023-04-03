#include "lists.h"
#include <string.h>

/**
 * add_node_end - Add a new node at the end of a linked list
 *
 * @head: Double pointer to the head of the list
 * @str: Data to assign to the new node
 *
 * Return: NULL on Failure, a pointer to the new node on SUCCESS
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = *head;
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		while (node->next != NULL)
			node = node->next;

		node->next = newNode;
	}

	return (newNode);
}
