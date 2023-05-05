#include "main.h"
/**
 * get_endianness - Check endianness of a system
 *
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c == 1)
		return (1);
	else
		return (0);
}
