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
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
