#include "dog.h"
/**
 * free_dog - a
 * @d: a
 *
 *
 *
 *
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}