#include "main.h"
/**
 * _memcpy - copies a block of memory to another block of memory
 * @dest: destination of copying
 * @src: the source to copy from
 * @n: number of bytes to be copied
 *
 * Return: changed array with new value for n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
