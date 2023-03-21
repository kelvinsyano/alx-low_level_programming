#include "dog.h"

/**
 * init_dog - function for struct initialition
 * @d: first
 * @name: second
 * @age: third
 * @owner: forth
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(strlen(name) + 1);
	strcpy(d->name, name);
	d->age = age;
	d->owner = malloc(strlen(owner) + 1);
	strcpy(d->owner, owner);
}
