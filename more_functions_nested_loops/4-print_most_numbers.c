#include "main.h"

/**
 * print_most_numbers - Print numbers form 0 to 9 except 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int i = 48;

	for (; i <= 57; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}

	_putchar('\n');
}
