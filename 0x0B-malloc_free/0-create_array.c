#include <stdlib.h>
#include "main.h"

/**
  * create_array - creates array with sizr of size and assign char c
  * @size: the size of the array to be created
  * @c: char to be assigned
  *
  * Return: pointer to array address or NULL
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *final;

	final = malloc(sizeof(char) * size);
	if (size == 0 || final == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		final[i] = c;
	return (final);
}
