#include "main.h"

/**
 * _puts_recursion - Print a string using recursion
 * @s: Input string
 * Return: void
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;

	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}

	else
		_putchar('\n');
}
