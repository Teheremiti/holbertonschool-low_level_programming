#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of the
 * two diagonals of a square matrix of integers
 *
 * @a: Input 2Darray of integers
 * @size: Input int
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0, diag1 = 0, diag2 = 0;

	for (; i < size; i++)
	{
		int j = size - 1 - i;

		diag1 += a[i * size + i];
		diag2 += a[i * size + j];
	}

	printf("%d, %d\n", diag1, diag2);
}
