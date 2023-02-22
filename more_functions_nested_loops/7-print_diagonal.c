#include "main.h"

/**
 * print_diagonal - Draw a diagonal line on the terminal
 * @n: Input int
 * Return: void
 */

void print_diagonal(int n)
{
	int l = 1;

	if (n <= 0)
		_putchar('\n');

	for (; l <= n; l++)
	{
		int c = 1;

		for (; c < l; c++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
