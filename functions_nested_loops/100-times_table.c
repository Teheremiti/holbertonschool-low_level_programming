#include "main.h"

/**
 * print_times_table - Print the n times table if 0 <= n <= 15
 * @n: Input int
 * Return: void
 */

void print_times_table(int n)
{
	int p = 0;

	if (n < 0 || n > 15)
		return;

	for (; p <= n; p++)
	{
		int i = 0;

		for (; i <= p; i++)
		{
			int k = 1;

			_putchar('0');
			_putchar(',');

			for (; k <= p; k++)
			{
				int multiple = i * k;

				if (multiple <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + multiple);
				}
				else
				{
					_putchar(' ');
					_putchar('0' + multiple / 10);
					_putchar('0' + multiple % 10);
				}

				if (k != p)
					_putchar(',');
			}

			_putchar('\n');
		}

		_putchar('\n');
	}

}
