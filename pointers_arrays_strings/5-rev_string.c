#include "main.h"

/**
 * _strlen - Return the length of a string
 * @str: Intput string pointer
 * Return: len
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	return (len);
}

/**
 * rev_string - Reverse a string
 * @s: Intput string pointer
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0, len = _strlen(s), tmp;

	for (; i <= len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;
	}
}
