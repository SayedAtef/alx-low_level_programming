#include <stdio.h>
#include "lists.h"

/**
  * print_list - Prints all elements of list_t list
  * @h: A pointer to the head of list
  *
  * Return: Number of nodes in that list
  */
size_t print_list(const list_t *h)
{
	const list_t *curr = h
	size_t counter = 0;

	while (curr != NULL)
	{
		if (curr != NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", curr->len, curr->str);
		counter++;
		curr = curr->next;
	}

	return (counter);
}
