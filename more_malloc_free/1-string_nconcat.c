#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenate the first n bytes
 * of a string into another string
 *
 * @s1: Input string
 * @s2: Inptut string
 * @n: Input int, number of bytes to add from s2 to s1
 *
 * Return: A pointer to the newly allocated space in memory
 * wich contains the concatenated string on SUCCESS
 * NULL on FAILURE
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	int len1;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
	{}

	concat = malloc(sizeof(*concat) * (len1 + n) + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];

	for (j = 0; s2[j] != '\0' && j < n; j++)
	{
		concat[i] = s2[j];
		i++;
	}

	concat[i] = '\0';
	return (concat);
}
