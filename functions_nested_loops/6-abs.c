#include "main.h"

/**
 * _abs - Compute the absolute value of an int
 * @n: Input int
 * Return: Absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);

	return (n);
}
