#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - FizzBuzz test
 * Return: void
 */

void fizz_buzz(void)
{
	int n = 1;

	for (; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz ");

		else if (n % 3 == 0)
			printf("Fizz ");

		else if (n % 5 == 0)
		{
			if (n == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		}

		else
			printf("%d ", n);
	}

	printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
