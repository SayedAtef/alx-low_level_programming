#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _strdup - duplicate given string to new memory location
  * @str: given string to copy from
  *
  * Return: (0) or (NULL)
  */
char *_strdup(char *str)
{
	int i, j;
	char *final;

	if (str == NULL)
		return NULL;

	i = 0;
	while (str[i] != '\0')
		i++;

	final = malloc(sizeof(char) * (i + 1));

	if (final == NULL)
		return NULL;

	for (j = 0; str[j]; j++)
		final[j] = str[j];

	return (final);
}
