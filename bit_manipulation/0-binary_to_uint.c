#include "main.h"

/**
 * powerofTwo - Elevate 2 to the power of a given positive int
 *
 * @i: Integer to raise to the power of
 *
 * Return: 2 to the power i
 */

unsigned int powerofTwo(int i)
{
	if (i == 0)
		return (1);

	if (i == 1)
		return (2);

	return (2 * powerofTwo(i - 1));
}

/**
 * binary_to_uint - Convert a binary number to an unsigned int
 *
 * @b: String binary number
 *
 * Return: The converted number on SUCCESS, otherwise 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int len = 0, i = 0;

	if (b == NULL)
		return (0);

	for (; b[len] != '\0'; len++)
		if (b[len] != '0' && b[len] != '1')
			return (0);

	for (; i < len; i++)
	{
		int bit = len - i - 1;

		if (b[bit] == '1')
			decimal += powerofTwo(i);
	}

	return (decimal);
}
