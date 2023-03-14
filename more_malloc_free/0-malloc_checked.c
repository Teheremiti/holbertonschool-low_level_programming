#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocate memory using malloc
 *
 * @b: Input unsigned int, number of bytes to allocate
 *
 * Return: A pointer to the allocated memory on SUCCESS
 * Cause normal process termination with a status of 98 on FAILURE
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
