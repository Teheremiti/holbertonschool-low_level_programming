#include "main.h"

/**
 * _memset - Fill memory with a constant byte
 * @s: Input string
 * @b: Input char
 * @n: Input unsigned int
 * Return: s modified
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*p++ = b;

	return (s);
}
