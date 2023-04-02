#include "main.h"
#include <stdio.h>

/**
 * fibonacci98 - Print the first 98 Fibonacci numbers
 * Return: (void)
 */

void fibonacci98(void)
{
	unsigned long num1 = 1, num2 = 2, tmp;
	int count = 2;

	printf("%d, %d", 1, 2);

	while (count < 98)
	{
		printf(", ");

		tmp = num1;
		num1 = num2;
		num2 += tmp;

		printf("%lu", num2);

		count++;
	}

	putchar('\n');
}

/**
 * main - Check the code
 * Return: Always 0
 */

int main(void)
{
	fibonacci98();
	return (0);
}
