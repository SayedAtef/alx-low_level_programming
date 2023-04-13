#include <stdlib.h>
#include "main.h"

/**
  * string_nconcat - concat two strings and return pointer to new memory
  * @s1: first string to be concatenated
  * @s2: second string to be concatenated
  * @n: number of bytes from s2 to be concatenated
  *
  * Return: pointer or NULL
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, length1 = 0, length2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;

	if (n < length2)
		str = malloc(sizeof(char) * (length1 + n + 1));
	else
		str = malloc(sizeof(char) * (length1 + length2 + 1));

	if (str == NULL)
		return (NULL);

	while (i < length1)
	{
		str[i] = s1[i];
		i++;
	}
	while (n < length2 && i < (length1 + n))
		str[i++] = s2[j++];
	while (n >= length2 && i < (length1 + length2))
		str[i++] = s2[j++];
	str[i] = '\0';

	return (str);
}
