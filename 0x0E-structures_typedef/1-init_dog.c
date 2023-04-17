#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - initialize variabe of type struct dog
  * @d: a pointer to which will be used to initialize struct dog
  * @name: the dog's name
  * @age: the dog's age
  * @owner: the dog's owner
  *
  * Return: void
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
