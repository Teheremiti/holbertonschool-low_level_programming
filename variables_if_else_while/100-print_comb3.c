#include <stdio.h>
#include <time.h>

/**
 * main - Print all possible different combinations of two digits
 * Return: 0
 */

int main(void)
{
	int n = 0;

	for (; n <= 8; n++)
	{
		int k = n + 1;

		for (; k <= 9; k++)
		{
			putchar('0' + n);
			putchar('0' + k);

			if (n != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
