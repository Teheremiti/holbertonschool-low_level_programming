#include "main.h"

/**
 * _strchr - Locate a character in a string
 * @s: Input string
 * @c: Input char
 * Return: A pointer to the first occurence of c in s, or NULL if the
 * character is not found
 */

char *_strchr(char *s, char c)
{
	for (; *s != c; s++)
	{
		if (*s == '\0')
			return (0);
	}

	return (s);
}
