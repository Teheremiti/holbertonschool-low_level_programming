#include <stdio.h>
#include <time.h>

/**
 * main - Print all possible combinaitions of single digit numbers
 * Return: 0
 */

int main(void)
{
	int n = 48;

	for (; n <= 57; n++)
	{
		putchar(n);

		if (n < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
