#include <stdio.h>
#include <time.h>

/**
 * main - Print the alphabet
 * Return: 0
 */

int main(void)
{
	char ch = 'a';

	for (; ch <= 'z'; ch++)
		putchar(ch);

	printf("\n");
	return (0);
}
