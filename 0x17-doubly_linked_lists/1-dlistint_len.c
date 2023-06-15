#include "lists.h"

/**
 * dlistint_len - returns number of element in a doubly linked dlistint_t list
 * @h: pointer to the head of that list
 *
 * Return: number of nodes of that list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
