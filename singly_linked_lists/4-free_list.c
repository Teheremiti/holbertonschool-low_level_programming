#include "lists.h"

/**
 * free_list - Free a linked list_t list
 *
 * @head: Pointer to the head of the list
 *
 * Return: (void)
 */

void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_list(head->next);

		free(head->str);
		free(head);
	}
}
