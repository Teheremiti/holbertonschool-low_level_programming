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

	/**
	 * INT_MIN = -2147483648 and INT_MAX = 2147483647 : can not be
	 * reached by taking opposite
	 */
	if (n == INT_MIN)
		n = 8;

	_putchar('0' + n % 10);
	return (n % 10);
}
