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

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count
	}

	return (count);
}
