#include <stdio.h>
#include <time.h>

/**
 * main - Print all numbers of base 16 in lowercase
 * Return: 0
 */

int main(void)
{
	int n = 48;
	char ch = 'a';

	for (; n <= 57; n++)
		putchar(n);

	for (; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
