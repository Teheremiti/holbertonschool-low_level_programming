#include <time.h>
#include "main.h"

/**
 * print_sign - Print the sign of the number
 * @n: Type int
 * Return: 1 if n > 0, 0 if n = 0, -1 if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
