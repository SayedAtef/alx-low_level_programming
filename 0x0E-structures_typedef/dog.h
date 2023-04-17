#ifndef DOG_H
#define DOG_H

/**
  * struct dog - contains basic info about dog
  * @name: the dog's name
  * @age: the dog's age
  * @owner: the dog's owner
  *
  * Description: this a basic dog struct
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
  * dog_type - new type using dog
  */
typedef struct dog dog_type;

#endif