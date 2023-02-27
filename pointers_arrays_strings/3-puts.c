#include "main.h"

/**
 * _puts - Print a string to stdout
 * @str : Input string pointer
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(str[0]);
		str++;
	}

	_putchar('\n');
}
