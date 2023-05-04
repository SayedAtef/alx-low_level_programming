#include "main.h"

/**
 * get_bit - Gets a value of a bit at a given index
 * @n: The number that contains the bit
 * @index: Index of a bit to return
 *
 * Return: The bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
