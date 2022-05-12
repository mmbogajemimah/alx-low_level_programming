#include "main.h"
#include <stdlib.h>
/**
 * free_dog - free space
 * @d: pointer to struct
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}