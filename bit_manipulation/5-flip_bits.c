#include "main.h"

/**
 * flip_bits - Compute the number of bits to flip to get
 * from a number to another
 *
 * @n: Input int
 * @m: Input int
 *
 * Return: The number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long differences = n ^ m;
	int count = 0;

	for (; differences != 0; differences >>=1)
		count += differences & 1;

	return (count);
}
