#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);


/**
 * print_type - Struct to find the correct type to print
 *
 * @type: Type to print
 * @f: Function to print with correct type
 */

typedef struct print_type
{
	char *type;
	void (*f)();
} print_type_t;

void print_all(const char * const format, ...);

#endif
