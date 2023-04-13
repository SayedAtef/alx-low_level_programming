#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - allocates memory with length argument
  * @b: length to be allocated
  *
  * Return: (pointer to allocated memory) | (98) Error
  */
void *malloc_checked(unsigned int b)
{
	void *final;

	final = malloc(b);
	if (final == NULL)
		return(98);
	return (final);
}
