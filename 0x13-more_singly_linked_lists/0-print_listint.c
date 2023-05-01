#include "lists.h"

/**
 * print_listint - prints all elements of listint_t list
 * @h: A pointer to the head of the list
 *
 * Return: The size of list
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
