#include "main.h"
/**
 * _strncat - concatenates two strings and it will use n
 * n bytes from src
 *
 * @dest: input value
 * @src: input value
 * @n: integer value
 *
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' || src[j] != n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
