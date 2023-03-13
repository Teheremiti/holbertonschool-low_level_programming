#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Create a 2D array of ints
 * @width: Input int, width of the array
 * @height: Input int, height of the array
 *
 * Return: NULL if width = 0 or height = 0 or on failure, otherwise a pointer
 * to the array
 */

int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(*arr) * height);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(**arr) * width);
		if (arr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(arr[i]);

			free(arr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (arr);
}
