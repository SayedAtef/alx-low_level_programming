#include <stdlib.h>
#include "main.h"

/**
  * str_concat - returns pointer to new aloc with two strings concatenated
  * @s1: first input to be concatenated
  * @s2: second input to be concatenated
  *
  * Return: pointer to concatenation of s1 and s2
  */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *final;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	final = malloc(sizeof(char) * (i + j + 1));

	if (final == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		final[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		final[i] = s2[j];
		i++;
		j++;
	}
	final[i] = '\0';

	return (final);
}
