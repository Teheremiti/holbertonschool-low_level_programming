#include <stdio.h>
#include "main.h"

/**
 * natural - Compute and print the sum of all the multiples of 3 or 5 below
 * 1024 (excluded)
 * Return: void
 */

void natural(void)
{
	int n = 3, sum = 0;

	for (; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			sum += n;
	}

	printf("%d\n", sum);
}

/**
 * main - Check the code
 * Return: 0
 */

int main(void)
{
	natural();
	return (0);
}
