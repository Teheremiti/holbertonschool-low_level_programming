#include <stdio.h>

/**
 * main - Print  all possible combinations of two two-digit numbers
 * Return: 0
 */

int main(void)
{
	int num1 = 0;

	for (; num1 <= 98; num1++)
	{
		int num2 = num1 + 1;

		for (; num2 <= 99; num2++)
		{
			putchar('0' + num1 / 10);
			putchar('0' + num1 % 10);
			putchar(' ');
			putchar('0' + num2 / 10);
			putchar('0' + num2 % 10);

			if (num1 != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
