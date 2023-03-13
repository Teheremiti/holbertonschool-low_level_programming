#include <stdlib.h>
#include "main.h"

/**
 * create_array - Create an array of chars initialized with a specific char
 * @size: Input int, size of the array
 * @c: Input char, to initialize the array
 *
 * Return: NULL if size = 0 or fail, otherwise a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size);

	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
