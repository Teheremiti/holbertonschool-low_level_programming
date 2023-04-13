#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - Add a element to the hash table
 *
 * @ht: Hash table to add or update
 * @key: New key
 * @value: New value
 *
 * Return: 1 on SUCCESS, otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;
	hash_node_t *newNode, *tmp;

	if (ht == NULL || key == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);

	newNode->key = strdup(key);
	newNode->value = strdup(value);

	newNode->next = ht->array[index];
	ht->array[index] = newNode;
	return (1);
}
