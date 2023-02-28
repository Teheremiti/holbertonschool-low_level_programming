#include "main.h"

/**
 * _strncat - Concatenate two strings using at most n bytes
 * @src: Input source string pointer
 * @dest: Input destination pointer
 * @n: Input int
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, k, last;

	for (i = 0; dest[i] != '\0'; i++)
		continue;

	for (j = 0; src[j] != '\0'; j++)
		continue;

	if (j < n)
		last = j;
	else
		last = n;

	for (k = 0; k < last; k++)
		dest[i + k] = src[k];

	dest[i + last] = '\0';
	return (dest);
}
