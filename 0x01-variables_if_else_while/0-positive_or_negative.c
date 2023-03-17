#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - Entry pint
  * each time the program runs will generate random number
  * store this number inside variable n
  * check if the number is positive then print is positive
  * check if the number is equal to 0 then print is zero
  * check if the number is negative then print is negative
  * Return: always (0) (success)
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
