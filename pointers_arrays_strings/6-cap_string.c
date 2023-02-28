#include "main.h"

/**
 * cap_string - Capitalize all words of a string
 * @s: Input string
 * Return: The capitalized string
 */

char *cap_string(char *s)
{
	int i, j;
	int separators[] = {
		' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'
	};

	for (i = 1; s[i] != '\0'; i++)
	{
		for (j = 0; separators[j] != '\0'; j++)
		{
			int prev_is_separator = (s[i - 1] == separators[j]);
			int curr_is_letter = (s[i] >= 'a' && s[i] <= 'z');

			if (prev_is_separator && curr_is_letter)
				s[i] -= 32;
		}
	}

	return (s);
}
