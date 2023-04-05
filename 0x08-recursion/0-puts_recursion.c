#include "main.h"

/**
  * _puts_recursion - represents puts function with recursion
  * @s: input to be printed
  * Return: always (0)
  */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
