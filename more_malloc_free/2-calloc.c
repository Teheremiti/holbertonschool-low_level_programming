#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocate memory for an array
 *
 * @nmemb: Input unsigned int, number of elements in the array
 * @size: Input unsigned int, size of each element in bytes
 *
 * Return: NULL if nmemb or size is zero or on FAILURE, void on SUCCESS
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	return (arr);
}
