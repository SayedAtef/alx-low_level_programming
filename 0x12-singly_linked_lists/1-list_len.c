#include <stddef.h>
#include "lists.h"

/**
  * list_len - returns number of elements in list_s list
  * @h: pointer to the head of that list
  *
  * Return: Number of elements in that list
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
