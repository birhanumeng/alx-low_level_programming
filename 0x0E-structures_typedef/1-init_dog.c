#include "dog.h"

/**
 * init_dog - Initializes struct dog
 * @d: struct dog to be initialized
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Retrun: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
