#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Get the value associated with a key
 *
 * @ht: Hash table to scan
 * @key: Key to search
 *
 * Return: The value associated with the key on SUCCESS, otherwise NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long index;

	if (ht != NULL)
	{
		index = key_index((unsigned char *)key, ht->size);
		tmp = ht->array[index];
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, key) == 0)
				return (tmp->value);

			tmp = tmp->next;
		}
	}

	return (NULL);
}
