#include "main.h"
/**
  * _islower - show 1 if the input is
  * a lowercase, and zero otherwise
  *
  * @c: The charachter in ASCII code
  *
  * Return: 1 for lowercase and 0 otherwise
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
