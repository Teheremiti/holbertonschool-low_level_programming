#include "main.h"
#include <stdio.h>

/**
 * set_bit - Set the value of a bit to 1 at a given index
 *
 * @n: Number to modify
 * @index: Index of the bit to modify starting from the left
 *
 * Return: 1 on SUCCESS, otherwise -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long) * 8)
		return (-1);

	*n |= 1 << index;
	return (1);
}
