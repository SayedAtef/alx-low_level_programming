#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - frees the memory allocated to the struct dog
  * @d: pointer to that struct
  */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
