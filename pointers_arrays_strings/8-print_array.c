#include <stdio.h>
#include "main.h"

/**
 * print_array - Print n elements of an array
 * @a: Input array pointer
 * @n: Input int
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}

	printf("\n");
}
