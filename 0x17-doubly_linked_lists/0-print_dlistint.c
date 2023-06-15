#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list doubly.
 * @h: pointer to the head of that list
 *
 * Return: number of nodes in that list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
