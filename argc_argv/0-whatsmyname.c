#include "main.h"
#include <stdio.h>

/**
 * main - Print the name of the program
 * @argc: number of arguments in the command line
 * @argv: array of strings containing the arguments of the command line
 * Return: 0
 */

int main(__attribute__((unused)) int argc, char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
