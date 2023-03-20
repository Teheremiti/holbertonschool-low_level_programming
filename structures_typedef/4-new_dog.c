#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Create a new dog in the structure dog
 *
 * @name: Input string, dog name
 * @age: Input float, dog age
 * @owner: Input string, dog owner
 * Return: A pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(*d));

	if (d == NULL)
		free(d);

	else
	{
		char *cp_name = name;
		char *cp_owner = owner;

		d->name = cp_name;
		d->age = age;
		d->owner = cp_owner;
	}

	return (d);
}
