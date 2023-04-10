#include <stdio.h>
#include "main.h"
/**
  * main - here we print the name of the program
  * @argc: count of number of arguments passed while compiling
  * @argv: array of those arguments
  * Return: Always (0)
  */
int main(int argc__attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
