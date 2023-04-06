#include "main.h"

int actual_sqrt_recursion_helper(int n, int i);

/**
  * _sqrt_recursion - returns the natural square root of a given number
  * @n: the number on which will get the sqt of
  * Return: the square root of a number
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion_helper(n, 0));
}

/**
 * actual_sqrt_recursion_helper - recurses to find the natural sqt of a number
 * @n: the number on which will get the sqt of
 * @iterator: iterator
 * Return: the resulting square root
 */
int actual_sqrt_recursion_helper(int n, int iterator)
{
	if (iterator * iterator > n)
		return (-1);
	if (iterator * iterator == n)
		return (iterator);
	return (actual_sqrt_recursion_helper(n, iterator + 1));
}
