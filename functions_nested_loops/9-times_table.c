#include "main.h"

/**
 * times_table - Print the 9 times table
 * Return: void
 */

void times_table(void)
{
	int n = 0;

	for (; n <= 9; n++)
	{
		int k = 1;

		_putchar('0');
		_putchar(',');

		for (; k <= 9; k++)
		{
			int multiple = n * k;

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

			if (k != 9)
				_putchar(',');
		}

		_putchar('\n');
	}
}
