#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Add positive numbers and print the result,
 * print "0" if no arguments and print "Error" if symbols other than digits
 * @argc: Count of the arguments supplied to the program
 * @argv: Array of pointers to the strings which are those arguments
 * Return: 1 if the program receives symbols other than digits, otherwise 0
 */

int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);

		for (; *argv[i] != '\0'; argv[i]++)
		{
			if (*argv[i] < '0' || *argv[i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
