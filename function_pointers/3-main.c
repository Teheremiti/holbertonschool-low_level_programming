#include "3-calc.h"

/**
 * main - Check the code
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int num1, num2;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]), num2 = atoi(argv[3]);
	op = get_op_func(argv[2]);

	if (argv[2][1] != '\0' || op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op(num1, num2));
	return (0);
}
