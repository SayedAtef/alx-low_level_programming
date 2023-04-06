#include "main.h"
/**
  * int _strlen_recursion(char *s) - returns the length of the input string
  * @s: input
  * Return: the length of the given input
  */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
