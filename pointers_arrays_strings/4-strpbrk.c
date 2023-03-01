#include "main.h"

/**
 * _strpbrk - Locate the first occurence in the string s of any of the bytes
 * in the string accept
 *
 * @s: Input string
 * @accept: Input string
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s != '\0'; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
	}

	return (0);
}
