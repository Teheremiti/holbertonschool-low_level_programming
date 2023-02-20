#include <stdio.h>
#include <time.h>

/**
 *  main - Print alphabet in lower then uppercase
 *  Return: 0
 */

int main(void)
{
	char ch_lower = 'a';
	char ch_upper = 'A';

	for (; ch_lower <= 'z'; ch_lower++)
		putchar(ch_lower);

	for (; ch_upper <= 'Z'; ch_upper++)
		putchar(ch_upper);

	printf("\n");
	return (0);
}
