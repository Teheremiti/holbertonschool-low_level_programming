#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Applicate a function to each element of an array
 *
 * @array: Array of ints
 * @size: Size of array
 * @action: Function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action != NULL)
	{
		size_t i = 0;

		for (; i < size; i++)
			action(array[i]);
	}
}
