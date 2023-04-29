#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of listint_t list
 * @h: A pointer to the head of the list
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (NULL);

	while (h->n != NULL)
	{
		count ++;
		printf("%d\n", n);
		h = h->next;
	}

	return (count);
}
