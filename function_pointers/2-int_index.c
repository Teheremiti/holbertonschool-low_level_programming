#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Search for an integer that matches a condition in an array
 *
 * @array: Array of ints
 * @size: Size of array
 * @cmp: Function pointer
 *
 * Return: Index of the first int that matches the condition
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);

	return (-1);
}
