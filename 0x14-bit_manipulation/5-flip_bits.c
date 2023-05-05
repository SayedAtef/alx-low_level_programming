#include "main.h"

/**
 * flip_bits - flips numbers and get number of bits needed to flip
 * @n: first number
 * @m: second number
 *
 * Return: The number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_number = n ^ m;
	unsigned int count = 0;

	while (xor_number)
	{
		if (xor_number & 1)
			count++;
		xor_number >>= 1;
	}

	return (count);
}
