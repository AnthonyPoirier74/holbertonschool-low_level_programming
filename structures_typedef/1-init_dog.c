#include "dog.h"
/**
 * init_dog - a
 * @d: a
 * @name: a
 * @age: a
 * @owner: a
 *
 *
 */
void init_dog(struct dog  *d, char *name, float age, char *owner)
{
	struct init_dog;

	if (d == NULL)
	{
		;
	}
	else
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
