#include "main.h"

/**
 * binary_to_uint - Converts binary to decimal
 * @b: pointer to that binary
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			decimal *= 2;
		else if (b[i] == '1')
			decimal = decimal * 2 + 1;
		else
			return (0);
	}

	return (decimal);
}
