#include "main.h"
#include <stdio.h>

/**
 * fibonacci98 - Print the first 98 Fibonacci numbers
 * Return: (void)
 */

/**
 * The code compiles and works but doesn't give the expected output
 * because an overflow is happening around the 94th term.
 * Since I can not use `long long`, pointers, arrays or structures,
 * I need to find an clever alternativecto this problem.
 * If this message still appears, I still haven't found it :)
 */

void fibonacci98(void)
{
	unsigned long num1 = 1, num2 = 2, tmp;
	int count = 2;

	printf("%d, %d", 1, 2);

	while (count < 98)
	{
		printf(", ");

		/* Check where overflow starts */
		if (num2 < num1)
			printf("???");

		else
		{
			tmp = num1;
			num1 = num2;
			num2 += tmp;

			printf("%lu", num2);
		}

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
