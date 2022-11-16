#include "dog.h"

/**
 * init_dog - initialize a variable of type
 * @d: name of dog to be initialized
 * @name: name character
 * @age: age number
 * @owner: name of owner
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
