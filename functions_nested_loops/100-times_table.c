#include "main.h"

/**
 * print_single - Print a single digit number with appropriate formating
 * Return: (void)
 */

void print_single(int num)
{
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
	_putchar('0' + num % 10);
}

/**
 * print_double - Print a two digits number with appropriate formating
 * Return: (void)
 */

void print_double(int num)
{
	_putchar(' ');
	_putchar(' ');
	_putchar('0' + product / 10);
	_putchar('0' + product % 10);
}

/**
 * print_triple - Print a three digits number with appropriate formating
 * Return: (void)
 */

void print_triple(int num)
{
	_putchar(' ');
	_putchar('0' + product / 100);
	_putchar('0' + (product / 10) % 10);
	_putchar('0' + product % 10);
}

/**
 * print_times_table - Print the n times table
 * @n: Input int
 * Return: void
 */
void print_times_table(int n)
{
	int i = 0, k, product;

	if (n < 0 || n > 15)
		return;

	for (; i <= n; i++)
	{
		_putchar('0');

		if (n != 0)
			_putchar(',');
		else
		{
			_putchar('\n');
			return;
		}

		for (k = 1; k <= n; k++)
		{
			product = i * k;

			if (product < 10)
				print_single(product);
				
			else if (product >= 10 && product < 100)
				print_double(product);
			
			else
				print_triple(product);
			
			if (k != n)
				_putchar(',');
		}
		_putchar('\n');
	}
}
