#include "main.h"

/**
 * print_line - Draw a straight line int the terminal
 * @n: Input int
 * Return: void
 */

void print_line(int n)
{
	for (; n > 0; n--)
		_putchar('_');

	_putchar('\n');
}
