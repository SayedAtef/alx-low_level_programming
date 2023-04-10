#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_number - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int check_number(char *str)
{
	unsigned int counter;

	counter = 0;
	while (counter < strlen(str))
	{
		if (!isdigit(str[counter]))
		{
			return (0);
		}
		counter++;
	}
	return (1);
}

/**
 * main - Print the result of sum of two positive numbers
 * @argc: number of arguments
 * @argv: array of those arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int counter;
	int string_to_integer;
	int sum = 0;

	counter = 1;
	while (counter < argc)
	{
		if (check_number(argv[counter]))
		{
			string_to_integer = atoi(argv[counter]);
			sum += string_to_integer;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		counter++;
	}

	printf("%d\n", sum);

	return (0);
}
