#include "dog.h"
#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
 * init_dog - function for struct initialition
 * @d: first
 * @name: second
 * @age: third
 * @owner: forth
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
