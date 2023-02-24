#include "main.h"

/**
 * print_last_digit - Print last digit of a number
 * @n: Input int
 * Return: Value of the last digit
 */

int print_last_digit(int n)
{
	int modulus = n % 10;

	if (modulus < 0)
		modulus *= -1;

	_putchar('0' + modulus);
	return (modulus);
}
