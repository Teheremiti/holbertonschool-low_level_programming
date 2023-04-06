#include "main.h"

/**
 * print_binary - Print a decimal number in binary
 *
 * @n: Input positive number
 *
 * Return: (void)
 */

void print_binary(unsigned long int n)
{
	unsigned long count = 0;
	unsigned long mask = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (; (n >> count) != 0; count++)
	{}

	mask <<= count - 1;

	for (; mask != 0; mask >>= 1)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
	}
}
