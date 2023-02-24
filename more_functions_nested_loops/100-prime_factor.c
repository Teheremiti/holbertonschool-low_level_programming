#include <stdio.h>
#include "main.h"

/**
 * prime_factor - Print largest prime factor of 612852475143
 * Return: Largest prime factor
 */

int prime_factor(void)
{	long n = 612852475143;
	long i = 3;
	int factor = 0;

	for (; i * i <= n; i += 2)
	{
		if (n % i == 0)
		{
			factor = i;

			while (n % i == 0)
				n /= i;
		}
	}

	if (n > 1)
		factor = n;

	printf("%d\n", factor);
	return (factor);
}


/**
 * main - Check the code
 * Return: 0
 */

int main(void)
{
	prime_factor();
	return (0);
}
