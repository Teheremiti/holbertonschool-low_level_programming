#include "3-calc.h"

/**
 * op_add - Addition
 * @a: Int
 * @b: Int
 * Return: Sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - Substraction
 * @a: Int
 * @b: Int
 * Return: Difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - Multiplication
 * @a: Int
 * @b: Int
 * Return: Product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - Division
 * @a: Int
 * @b: Int
 * Return: Quotient of a by b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 * op_mod - Modulus
 * @a: Int
 * @b: Int
 * Return: Remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
