#include "main.h"

/**
 * _islower - Check if c is lowercase
 * @c: ASCII value of a char (type int)
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
