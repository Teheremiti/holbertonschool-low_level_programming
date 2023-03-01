#include "main.h"

/**
 * _strspn - Get the number of bytes in the initial segment of s which consist
 * only of bytes from accept
 *
 * @s: Input string
 * @accept: Input string
 *
 * Return: Number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, match, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				match = 1;
				break;
			}
		}

		if (!match)
			break;

		count++;
	}

	return (count);
}
