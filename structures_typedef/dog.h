#ifndef DOG
#define DOG

/**
 * struct dog - Structure containing infos about dogs
 *
 * @name: Input string, dog name
 * @age: Input float, dog age
 * @owner: Input string, dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
