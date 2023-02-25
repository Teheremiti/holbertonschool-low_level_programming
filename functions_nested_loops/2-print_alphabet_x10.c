#include <stdio.h>
#include <time.h>
#include "main.h"

/**
 * print_alphabet_x10 - Print lowercase alphabet 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	int n = 1;

	for (; n <= 10; n++)
	{
		char ch = 'a'
			;
		for (; ch <= 'z'; ch++)
			_putchar(ch);

		_putchar('\n');
	}
}
