#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Initializes a variable of type struct dog
 * @d: pointer to dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: Name of owner
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
