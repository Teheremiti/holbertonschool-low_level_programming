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
 * print_rev - Print a string in reverse
 * @s: Intput string pointer
 * Return: void
 */

void print_rev(char *s)
{
	int i = _strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
}
