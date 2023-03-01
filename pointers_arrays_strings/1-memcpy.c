#include "main.h"

/**
 * _memcpy - Copy n bytes from memory area src to memory area dest
 * @dest: Input destination string
 * @src: Input source string
 * @n: Input int
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p_dest = dest;
	char *p_src = src;
	unsigned int i = 0;

	for (; i < n; i++)
		p_dest[i] = p_src[i];

	return (dest);
}
