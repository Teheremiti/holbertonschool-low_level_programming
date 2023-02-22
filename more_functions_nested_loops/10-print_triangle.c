#include "main.h"

/**
 * print_triangle - Print a triangle
 * @size: Input int
 * Return: void
 */

void print_triangle(int size)
{
	int c = size;

	if (size <= 0)
		_putchar('\n');

	for (; c >= 1; c--)
	{
		int i = 1;

		for (; i < c; i++)
			_putchar(' ');

		for (; i <= size; i++)
			_putchar('#');

		_putchar('\n');
	}
}
