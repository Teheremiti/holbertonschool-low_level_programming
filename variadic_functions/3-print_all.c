#include "variadic_functions.h"

/**
 * print_char - Print a char
 * @ap: Char to print
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}


/**
 * print_int - Print an integer
 * @ap: Int to print
 */

void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}


/**
 * print_float - Print a float
 * @ap: Float to print
 */

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}


/**
 * print_string - Print a string
 * @ap: String to print
 */

void print_string(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (s == NULL)
		s = "(nil)";

	printf("%s", s);
}

/**
 * print_all - Print anything
 *
 * @format: List of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	print_type_t print_type[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
	};

	va_list ap;
	int i, j;

	va_start(ap, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j <= 3)
		{
			if (*print_type[j].type == format[i])
			{
				print_type[j].f(ap);

				if (format[i + 1] != '\0')
					printf(", ");
			}

			j++;
		}
		i++;
	}

	printf("\n");
	va_end(ap);
}
