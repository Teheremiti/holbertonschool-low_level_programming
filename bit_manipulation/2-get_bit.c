#include "main.h"

/**
 * get_bit - Return the value of a bit at a given index
 *
 * @n: Number to check
 * @index: Index to check
 *
 * Return: The value of the bit at index on SUCCESS, otherwise -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long) * 8))
		return (-1);

	return ((n >> index) & 1);
}
