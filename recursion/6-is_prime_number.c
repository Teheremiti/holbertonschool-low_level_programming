#include "main.h"

/**
 * _prime - Check if a number is prime
 * @n: Input int
 * @i: Input int
 * Return: 1 if the number is prime, otherwise 0
 */

int _prime(int n, int i)
{
	/** Eviter la division par 0 */
	if (i == 1)
		return (1);

	/** Si n est divisible par un autre nb que lui-même, il n'est pas premier */
	else if (n % i == 0)
		return (0);

	return (_prime(n, i - 1));
}

/**
 * is_prime_number - Check if a number is prime
 * @n: Input int
 * Return: 1 if the number is prime, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (_prime(n, n - 1));
}
