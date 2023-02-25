#include "main.h"
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
		k = 1;

		_putchar('0');
		_putchar(',');
		for (; k <= n; k++)
		{
			product = i * k;

			if (product < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product % 10);
			}
			else if (product >= 10 && product < 100)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product / 10);
				_putchar('0' + product % 10);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + product / 100);
				_putchar('0' + (product / 10) % 10);
				_putchar('0' + product % 10);
			}
			if (k != n)
				_putchar(',');
		}
		_putchar('\n');
	}
}
