#include "main.h"

/**
 * print_square - Print a square
 * @size: Intput int
 * Return: void
 */

void print_square(int size)
{
	int n = 1;

	for (; n <= size; n++)
	{
		int p = 1;

		for (; p <= size; p++)
			_putchar('#');

		_putchar('\n');
	}
}
