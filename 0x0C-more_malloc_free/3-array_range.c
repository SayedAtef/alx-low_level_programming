#include <stdlib.h>
#include "main.h"

/**
  * array_range - creates array using min amd max
  * @min: starting range
  * @max: ending range
  *
  * Return: pointer to newly allocated memory
  */
int *array_range(int min, int max)
{
	int *ptr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == (NULL))
		return (NULL);

	for (i = 0; max >= min; i++)
		ptr[i] = min++;

	return (ptr);
}
