#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 *
 * @size: Size of the array
 *
 * Return: A pointer the new hash table on SUCCESS, otherwise NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long i;
	hash_table_t *new_hash = malloc(sizeof(hash_table_t));

	if (new_hash == NULL)
		return (NULL);

	new_hash->size = size;
	new_hash->array = malloc(size * sizeof(hash_node_t *));

	if (new_hash->array == NULL)
	{
		free(new_hash);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_hash->array[i] = NULL;

	return (new_hash);
}
