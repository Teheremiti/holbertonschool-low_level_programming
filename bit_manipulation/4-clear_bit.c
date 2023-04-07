#include "main.h"

/**
 * clear_bit - Set the value of a bit to 0 at a given index
 *
 * @n: Number to modify
 * @index: Index of the bit to modify
 *
 * Return: 1 on SUCCESS, otherwise -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long) * 8)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
