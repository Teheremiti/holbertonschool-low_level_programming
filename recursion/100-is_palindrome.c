#include <string.h>
#include "main.h"

/**
 * _palindrome - Check if a string is a palindrome
 * @s: Input string
 * @i: Input int, where we want the comparison to start
 * Return: 1 if s is a palindrome, otherwise 0
 */

int _palindrome(char *s, int i)
{
	int max_i = strlen(s) - (i + 1);

	if (max_i + 1 <= 1)
		return (1);

	if (*s != s[max_i])
		return (0);

	return (_palindrome(++s, ++i));
}

/**
 * is_palindrome -  Check if a string is a palindrome
 * @s: Input string
 * Return: 1 if s is a palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	return (_palindrome(s, 0));
}
