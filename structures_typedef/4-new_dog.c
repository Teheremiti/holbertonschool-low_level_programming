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
	int len1 = 0, len2 = 0, i;
	char *cp_name = NULL, *cp_owner = NULL;

	dog_t *d = malloc(sizeof(*d));

	if (d == NULL)
	{
		free(d);
		d = NULL;
		return (NULL);
	}

	for (; name[len1] != '\0'; len1++)
	{}

	for (; owner[len2] != '\0'; len2++)
	{}

	cp_name = malloc(len1 * sizeof(*cp_name));
	cp_owner = malloc(len2 * sizeof(*cp_owner));

	if (cp_name == NULL)
	{
		free(d), free(cp_name);
		d = NULL, cp_name = NULL;
		return (NULL);
	}

	if (cp_owner == NULL)
	{
		free(d), free(cp_owner);
		d = NULL, cp_owner = NULL;
		return (NULL);
	}


	for (i = 0; name[i] != '\0'; i++)
		cp_name[i] = name[i];

	for (i = 0; owner[i] != '\0'; i++)
		cp_owner[i] = owner[i];

	d->name = cp_name;
	d->age = age;
	d->owner = cp_owner;

	return (d);
}
