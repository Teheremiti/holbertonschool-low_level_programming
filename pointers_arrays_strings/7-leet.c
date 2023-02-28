#include "main.h"

/**
 * leet - Encode a string to 1337
 * @s: Input string
 * Return: Encoded string
 */

char *leet(char *s)
{
	int i, j;
	int letters[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	int digits[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
				s[i] = digits[j % 5];
		}
	}

	return (s);
}
