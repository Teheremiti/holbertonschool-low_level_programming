#include "main.h"

/**
 * more_numbers - Print 10 times numbers from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int l = 10;

	while (l--)
	{
		int c = 0;

		for (; c <= 14; c++)
		{
			if (c >= 10)
				_putchar('1');

			_putchar('0' + c % 10);
		}

		_putchar('\n');
	}
}
