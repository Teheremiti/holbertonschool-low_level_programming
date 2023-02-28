#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: Input string pointer
 * @s2: Input string pointer
 * Return:
 * < 0 if the first non-matching char has a lower ascii value in s1 than s2
 * 0 if the strings are equal
 * > 0 if the first non-matching char has a higher ascii value in s1 than s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] < s2[i])
			return (-15);

		else if (s1[i] > s2[i])
			return (15);
	}

	return (0);
}
