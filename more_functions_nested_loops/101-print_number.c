#include <limits.h>
#include "main.h"

/**
 * print_number - Print an integer using recursion
 * @n: Intput int
 * Return: void
 */

void print_number(int n)
{
	int lastDigit = 0;

	if (n == INT_MIN)
	{
		lastDigit = -(n % 10);
		n += 1;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	if (lastDigit)
		_putchar('0' + lastDigit);
	else
		_putchar('0' + n % 10);
}
