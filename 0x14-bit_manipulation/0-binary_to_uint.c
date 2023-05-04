#include "main.h"

/**
 * binary_to_uint - Converts binary to decimal
 * @b: pointer to that binary
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base_num = 1, decimal = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[1] > '1')
			return (0);

		if (b[i] == '1')
			decimal += base_num;

		base_num *= 2;
	}

	return (decimal);
}
