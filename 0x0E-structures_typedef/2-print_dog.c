#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: name of dog to be initialized
 * Return: Always 0
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("%s\n", d->name);
	}

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}

	if (d == NULL)
		return (0);
}
