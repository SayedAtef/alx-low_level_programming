#include "lists.h"

/**
 * get_dnodeint_at_index - finds a specific node of a doubly linked list
 * @head: pointer to the head of the list
 * @index: index of node to get
 *
 * Return: address of the indexed node or NULL on failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
