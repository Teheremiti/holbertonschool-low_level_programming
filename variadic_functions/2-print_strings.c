#include "variadic_functions.h"

/**
 * print_strings - Print strings
 *
 * @separator: String printed between strings
 * @n: Number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(strings, char *);

		if (str == NULL)
			str = "(nil)";

		printf("%s", str);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	va_end(strings);
	printf("\n");
}
