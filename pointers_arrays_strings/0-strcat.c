#include "main.h"

/**
 * _strcat - Concatenate two strings
 * @src: Input source string pointer
 * @dest: Input destination string pointer
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		continue;

	for (j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';
	return (dest);
}
