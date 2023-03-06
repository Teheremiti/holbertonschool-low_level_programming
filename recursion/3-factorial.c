#include "main.h"

/**
 * factorial - Return the factorial a a number
 * @n: Input int
 * Return: Int n!
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}
