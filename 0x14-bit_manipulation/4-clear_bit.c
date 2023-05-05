#include "main.h"

 /**
  * set_bit - sets the value of a bit at given index to 1
  * @n: given number
  * @index: index of bit to be changed
  *
  * Return: 1 or -1
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= 1 << index;
	return (1);
}
