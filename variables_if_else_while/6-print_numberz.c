#include <stdio.h>
#include <time.h>

/**
 * main - Print all single digit numbers
 * Return: 0
 */

int main(void)
{
	int n = 0;

	for (; n <= 9; n++)
		putchar(48 + n);

	printf("\n");
	return (0);
}
