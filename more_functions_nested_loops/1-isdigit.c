#include "main.h"

/**
 * _isdigit - Check for digit
 * @c: Input int
 * Return: 1 if c is a digit (0 through 9), 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
