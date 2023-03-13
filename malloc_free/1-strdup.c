#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicate a string and return a pointer to
 * the newly allocated space in memory
 *
 * @str: Input string to copy
 *
 * Return: NULL if str = NULL, otherwise a pointer to the new string
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len += 1;

	duplicate = malloc(len);

	for (i = 0; i < len; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
