#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print all natural numbers from n to 98
 * @n: Input int, natural
 * Return: void
 */

void print_to_98(int n)
{
	int tmp = n;

	for (; tmp < 98; tmp++)
		printf("%d, ", tmp);

	for (; tmp > 98; tmp--)
		printf("%d, ", tmp);

	printf("98\n");
}
