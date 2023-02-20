#include <stdio.h>
#include <time.h>

/**
 *  main - Print all single digit numbers
 *  Return: 0
 */

int main(void)
{
	int n = 0;

	for (; n <= 9; n++)
		printf("%d", n);

	printf("\n");
	return (0);
}
