#include "main.h"

/**
 * _strncpy - Copy at most n bytes of a string
 * @src: Input source string pointer
 * @dest: Input destination string pointer
 * @n: Input int
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
