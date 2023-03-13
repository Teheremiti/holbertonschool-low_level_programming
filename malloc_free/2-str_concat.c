#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenate two strings
 * @s1: Input string
 * @s2: Input string
 *
 * Return: NULL if failure, otherwise a pointer to the newly allocated space
 * in memory which contains the concatenation of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len1 += 1;

	for (i = 0; s2[i] != '\0'; i++)
		len2 += 1;

	concat = malloc(len1 + len2 + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1 + len2; i++)
	{
		if (i < len1)
			concat[i] = s1[i];
		else
			concat[i] = s2[i - len1];
	}

	return (concat);
}
