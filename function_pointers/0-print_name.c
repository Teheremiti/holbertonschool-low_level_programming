#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Print a name with a function pointer
 *
 * @name: Name
 * @f: Pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
