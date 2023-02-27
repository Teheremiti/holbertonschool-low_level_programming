#include "main.h"

/**
 * swap_int - Swap the value of two integers
 * @a: Input pointer
 * @b: Input pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
