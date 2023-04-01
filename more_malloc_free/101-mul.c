#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char);

/**
 * print_error - Print the error message to stdout
 * Return: (void)
 */

void print_error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}


/**
 * digitsOnly - Check if a string is composed only of numbers
 *
 * @str: String to check
 *
 * Return: 0 if False, 1 if True
 */

int digitsOnly(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] < '0' || str[i] > '9')
			return (0);

	return (1);
}


/**
 * initializeToZero - Allocate memory for a string and initialize
 * every character to '0'
 *
 * @len: The number of blocks to allocate
 * @size: The size of each block in bytes
 *
 * Return: A pointer to the newly allocated space in memory
 */

int *initializeToZero(int len, unsigned int size)
{
	int *zeroes = malloc(len * size);
	int i;

	if (zeroes == NULL)
		return (NULL);

	for (i = 0; i < len - 1; i++)
		zeroes[i] = 0;

	zeroes[i] = '\0';
	return (zeroes);
}


/**
 * removeZeroes - Remove useless zeroes on the right
 * of a number passed as a string
 *
 * @strNum: String number
 *
 * Return: The modified string
 */

char *removeZeroes(char *strNum)
{
	char *cleanNum = NULL;
	int i, j, len = strlen(strNum);

	for (i = 0; strNum[i] == '0'; i++)
	{}

	cleanNum = malloc(len * sizeof(char) + 1);
	if (cleanNum == NULL)
		return (NULL);

	for (j = 0; strNum[i] != '\0'; i++, j++)
		cleanNum[j] = strNum[i];

	cleanNum[j] = '\0';
	return (cleanNum);
}


/**
 * mul - Multiply two positive numbers passed as strings
 *
 * @num1: Input string of numbers
 * @num2: Input string of numbers
 *
 * Return: The product of num1 by num2
 */

char *mul(char *num1, char *num2)
{
	int *product = NULL;
	char *strProduct = NULL;
	int len1 = strlen(num1), len2 = strlen(num2);
	int i, j;

	product = initializeToZero(len1 + len2 + 1, sizeof(int));
	if (product == NULL)
		return (NULL);

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			product[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
			product[i + j] += product[i + j + 1] / 10;
			product[i + j + 1] %= 10;
		}
	}

	strProduct = malloc((len1 + len2) * sizeof(char) + 1);
	if (strProduct == NULL)
		return (NULL);

	for (i = 0; i < len1 + len2; i++)
		strProduct[i] = product[i] + '0';

	strProduct[i] = '\0';
	free(product);
	return (strProduct);
}


/**
 * main - Check the code
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	char *num1, *num2;
	char *product;
	int len1, len2;

	if (argc != 3)
		print_error();

	len1 = strlen(argv[1]);
	len2 = strlen(argv[2]);

	num1 = malloc(len1 + 1);
	if (num1 == NULL)
		return (-1);
	num1[len1 + 1] = '\0';

	num2 = malloc(len2 + 1);
	if (num2 == NULL)
		return (-1);
	num2[len2 + 1] = '\0';

	num1 = removeZeroes(argv[1]);
	num2 = removeZeroes(argv[2]);
	product = removeZeroes(mul(num1, num2));

	if (!digitsOnly(num1) || !digitsOnly(num2))
		print_error();

	printf("%s\n", product);

	free(num1), free(num2);
	free(product);
	return (0);
}
