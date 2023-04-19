#include "function_pointers.h"

/**
  * int_index - return index if true and -1 if false
  * @array: array to get index from
  * @size: array size
  * @cmp: pointer
  *
  * Return: (0)
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size < 1 || cmp == NULL)
		return (-1);

	for (i = 0; i < size ; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
