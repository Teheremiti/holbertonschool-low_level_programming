#include <limits.h>
#include "main.h"

/**
 * print_last_digit - Print last digit of a number
 * @n: Input int
 * Return: Value of the last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = -n;

	if (n == INT_MIN)
		n = -n - 1;

	_putchar('0' + n % 10);
	return (n % 10);
}
