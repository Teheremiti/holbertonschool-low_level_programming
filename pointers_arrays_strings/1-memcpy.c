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

	while (n--)
		*p_dest++ = *p_src++;

	return (p_dest);
}
