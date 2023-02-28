#include "main.h"

/**
 * reverse_array - Reverse the n elements of an array of integers
 * @a: Input array of integers
 * @n: Input int
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, tmp;

	for (; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
