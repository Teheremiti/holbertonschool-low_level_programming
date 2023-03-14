#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - Reallocate a memory using malloc and free
 *
 * @ptr: Input void pointer, which will be reallocated
 * @old_size: Input unsigned int, size of the space allocated for ptr
 * @new_size: Input unsigned int, size of the new block
 *
 * Return: NULL if new_size is zero or on FAILURE,
 * otherwise a pointer to the reallocated block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr = NULL;
	unsigned int size;

	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
		{
			free(nptr);
			nptr = NULL;
			return (NULL);
		}
		return (nptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		ptr = NULL;
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	else if (new_size < old_size)
		size = new_size;

	else
		size = old_size;

	nptr = malloc(new_size);
	if (nptr == NULL)
	{
		free(nptr);
		nptr = NULL;
		return (NULL);
	}
	nptr = memcpy(nptr, ptr, size);
	free(ptr);
	ptr = NULL;
	return (nptr);
}
