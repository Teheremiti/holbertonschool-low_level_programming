#include <stdlib.h>
#include "main.h"

/**
 * array_range - Create an array of ints using malloc
 *
 * @min: Input int
 * @max: Input int
 *
 * Return: NULL if min > max or on FAILURE
 * A  pointer to the new array on SUCCESS
 */

int *array_range(int min, int max)
{
	int *range, i, len;

	if (min > max)
		return (NULL);

	len = max - min;

	range = malloc(sizeof(*range) * (len + 1));

	if (range == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		range[i] = i;

	return (range);
}
