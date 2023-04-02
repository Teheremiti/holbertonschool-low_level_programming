#include "main.h"
#include <stdio.h>

/**
 * sumFibonacciEven - Find and print the sum of the
 * even-valued fibonacci numbers that do not exceed 4,000,000
 *
 * Return: The sum
 */

unsigned int sumFibonacciEven(void)
{
	unsigned int sum = 0;
	int num1 = 1, num2 = 2, tmp;

	while (num2 < 4000000)
	{
		if (num2 % 2 == 0)
			sum += num2;

		tmp = num1;
		num1 = num2;
		num2 += tmp;
	}

	return (sum);
}


/**
 * main - Check the code
 * Return: Always 0
 */

int main(void)
{
	unsigned int sum = sumFibonacciEven();

	printf("%u\n", sum);
	return (0);
}
