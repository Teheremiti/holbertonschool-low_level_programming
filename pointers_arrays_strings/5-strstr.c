#include "main.h"

/**
 * _strstr - Find the first occurence of
 * the substring needle in the string haystack
 *
 * @haystack: Input string
 * @needle: Input strin
 *
 * Return: Pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, flag;

	for (; *haystack != '\0'; haystack++)
	{
		if (*haystack == *needle)
		{
			flag = 0;
			for (i = 0; needle[i] != '\0'; i++)
			{
				if (*(haystack + i) != needle[i])
				{
					flag = 1;
					break;
				}
			}
		}

		if (!flag)
			return (haystack);
	}

	return (0);
}
