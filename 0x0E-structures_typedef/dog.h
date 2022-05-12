#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - struct containing dog details
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
