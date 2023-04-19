#include <stdio.h>
#include "function_pointers"

/**
  * print_name - prints name using function pointers
  * @name: to be printed
  * @f: function pointer
  *
  * Return: doesn't return anything
  */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
