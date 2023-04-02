#include <stdio.h>
#include "main.h"

/**
 * fibonacci - Print the first 50 Fibonacci numbers
 * Return: void
 */

void fibonacci(void)
{
	unsigned long num1 = 1, num2 = 2, count = 2, tmp = num1;

	printf("%d, %d\n", 1, 2);

	for (count = 2; count < 50; count++)
	{
		if (count != 2 && count != 50)
			printf(", ");

		tmp = num1;
		num1 = num2;
		num2 += tmp;
		printf("%lu", num2);
	}

	putchar('\n');
}

/**
 * main - Check the code
 * Return: 0
 */

int main(void)
{
	fibonacci();
	return (0);
}
