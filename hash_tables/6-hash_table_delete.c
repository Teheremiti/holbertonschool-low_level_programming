#include "hash_tables.h"

/**
 * hash_table_delete - Delete (free) a hash table
 *
 * @ht: Hash table to delete (free)
 *
 * Return: (void)
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long i;

	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *node = ht->array[i];

		while (node != NULL)
		{
			hash_node_t *tmp = node;

			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
