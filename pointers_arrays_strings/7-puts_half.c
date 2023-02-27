#include "main.h"

/**
 * _strlen - Return the length of a string
 * @s: Input string
 * Return: Int len
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * puts_half - Print half of a string
 * @str: Input string pointer
 * Return: void
 */

void puts_half(char *str)
{
	int len = _strlen(str), n;

	if (len % 2)
		n = (len + 1) / 2;
	else
		n = len / 2;

	for (; n < len; n++)
		_putchar(str[n]);

	_putchar('\n');
}
