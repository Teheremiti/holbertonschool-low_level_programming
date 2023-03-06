#include "main.h"

/**
 * _sqrt - Find the square root of n
 * @k: Input int
 * @n: Input int
 * Return: Square root of n
 */

int _sqrt(int root, int n)
{
	if (root * root == n)
		return (root);

	else
		if (root == n / 2)
			return (-1);

	return (_sqrt(root + 1, n));
}

/**
 * _sqrt_recursion - Return the natural square root of a number
 * @n: Input int
 * Return: Int sqrt(n)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	else if (n < 2)
		return (n);

	else
		return (_sqrt(1, n));
}
