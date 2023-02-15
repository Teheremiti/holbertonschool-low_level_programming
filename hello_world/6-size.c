#include<stdio.h>

/**
 * main - Print the size of a char, an int (normal, long and long long),
 * and a float
 * Return: 0
 */

int main(void)
{
	printf("Size of a char: %2d,\n")
	printf("Size of an int: %2d, sizeof(int)\n");
	printf("Size of a long int: %2d, sizeof(long int)\n");
	printf("Size of a long long int: %2d, sizeof(long long int)\n");
	printf("Size of a float: %2d, sizeof(float)\n");
	return (0);
}
