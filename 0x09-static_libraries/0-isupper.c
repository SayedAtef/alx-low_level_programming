#include "main.h"
/**
 * _isupper - uppercase letters
 * @c: char to check
 *
 * Return: 0 or 1 to check if the char is uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
