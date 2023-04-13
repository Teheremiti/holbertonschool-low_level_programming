#include "hash_tables.h"

/**
 * hash_table_print - Print a hash table
 *
 * @ht: Hash table to print
 *
 * Return: (void)
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp = NULL;
	char *sep = "";

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; ht && i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
			tmp = tmp->next;

			sep = ", ";
		}
	}
	printf("}\n");
}
