#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Print a variable of type struct dog
 * @d: Input address to a variable of type struct dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Owner: %s\n", d->owner);
	}
}
