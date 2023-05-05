#include "main.h"

/**
 * clear_bit - clears the value of a bit
 * @n: given number
 * @index: index of bit to be cleared
 *
 * Return: 1 for success or -1 for faliure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
