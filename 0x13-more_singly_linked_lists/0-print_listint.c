#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t linked list
 * @h: Pointer to the head node of the linked list
 *
 * Return: Number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t list_size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		list_size++;
	}

	return (list_size);
}
