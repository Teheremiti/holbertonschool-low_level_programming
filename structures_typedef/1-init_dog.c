#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog
 *
 * @d: Pointer to struct dog
 * @name: Input string, dog name
 * @age: Input float, dog age
 * @owner: Input string, dog owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
