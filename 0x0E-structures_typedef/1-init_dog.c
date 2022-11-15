#include <string.h>
#include "dog.h"

/**
 * init_dog - initializes variables to struct dog
 * @d: pointer to struct dog
 * @name: name of the dog
 * @age: age variable of dog
 * @owner: owner variable of struct dog
 *
 * Return: void
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
