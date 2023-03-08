#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the minimum number of coins to make change for
 * an amount of money
 *
 * @argc: Count of the arguments supplied to the program
 * @argv: Array of pointers to the strings which are those arguments
 *
 * Return: 1 on error, 0 on success
 */

int main(int argc, char **argv)
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents % 25 < cents)
		{
			cents -= 25;
			coins += 1;
		}
		else if (cents % 10 < cents)
		{
			cents -= 10;
			coins += 1;
		}
		else if (cents % 5 < cents)
		{
			cents -= 5;
			coins += 1;
		}
		else if (cents % 2 < cents)
		{
			cents -= 2;
			coins += 1;
		}
		else if (cents % 1 < cents)
		{
			cents -= 1;
			coins += 1;
		}
	}
	printf("%d\n", coins);
	return (0);
}
