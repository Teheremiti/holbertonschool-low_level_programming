#include <stdio.h>
#include <time.h>

/**
 * main - Print lowercase alphabet in reverse
 * Return: 0
 */

int main(void)
{
	char ch = 'z';

	for (; ch >= 'a'; ch--)
		putchar(ch);

	putchar('\n');
	return (0);
}
