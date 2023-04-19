#include <stdio.h>
#include "function_pointer.h"

/**
  * array_iterator - prints array elements
  * @array: array to be printed
  * @size: array size
  * @action: pointer
  *
  * Return: void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
