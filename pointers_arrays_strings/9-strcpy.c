#include "main.h"

/**
 * _strcpy - Copy the string *src to the buffer *dest
 * @dest: Input string pointer
 * @src: Input string pointer
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}
