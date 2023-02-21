#include <time.h>
#include "main.h"

/**
 * _isalpha - Check if parameter is a letter
 * @c: Type int
 * Return: 1 if c is a letter, lower or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);

	return (0);
}
