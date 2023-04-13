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
	char *keyCopy = strdup(key);
	char *valueCopy = strdup(value);
	hash_node_t *newNode;

	if (keyCopy == NULL  || valueCopy == NULL)
	{
		free(keyCopy), free(valueCopy);
		return (0);
	}

	if (ht == NULL)
		return (0);

	if (*key == '\0' || key == NULL)
		return (0);

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
	{
		free(keyCopy), free(valueCopy);
		return (0);
	}

	newNode->key = keyCopy;
	newNode->value = valueCopy;

	index = key_index((unsigned char *)keyCopy, ht->size);
	ht->array[index] = newNode;
	return (1);
}
