#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>


/**
 * struct dog - Défini un chien, son âge
 *              et son propriétaire.
 *
 * @name: name dog.
 * @age: age dog.
 * @owner: owner dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
