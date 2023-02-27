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
 * puts2 - Print every other character of a string
 * @str: Input pointer string
 * Return: void
 */

void puts2(char *str)
{
	int i = 0, len = _strlen(str);

	for (; i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
