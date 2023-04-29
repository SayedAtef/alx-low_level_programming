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

	while (h)
	{
		printf("%lu\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
