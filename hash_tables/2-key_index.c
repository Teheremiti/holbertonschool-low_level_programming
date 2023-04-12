#include "hash_tables.h"

/**
 * key_index - Get the index of a key
 *
 * @key: Key to find the index of
 * @size: Size of the hash table
 *
 * Return: The index of the key/value pair
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long hash = hash_djb2(key);

	unsigned long index = hash % size;

	return (index);
}
