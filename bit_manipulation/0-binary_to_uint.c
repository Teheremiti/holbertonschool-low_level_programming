#include "main.h"

/**
 * binary_to_uint - Convert a binary number to an unsigned int
 *
 * @b: String binary number
 *
 * Return: (void)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (b == NULL)
		return (0);

	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);

		n = (n << 1) + *b - '0';
	}

	return (n);
}
