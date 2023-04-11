#include <stdlib.h>
#include "main.h"

/**
  * alloc_grid - makes a grid
  * @width: width of the grid
  * @height: height of the grid
  *
  * Return: pointer to the grid (two dim array)
  */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **final;

	if (width <= 0 || height <= 0)
		return (NULL);

	final = malloc(sizeof(int *) * height);

	if (final == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		final[i] = malloc(sizeof(int) * width);

		if (final[i] == NULL)
		{
			for (; i >= 0; i--)
				free(final[i]);
			free(final);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			final[i][j] = 0;
	}

	return (final);
}
