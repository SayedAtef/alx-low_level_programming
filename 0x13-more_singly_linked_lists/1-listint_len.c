#include "lists.h"

/**
 * listint_len - reuturns the number of elements in a linked list
 * @h: A pointer to the head of the list
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
