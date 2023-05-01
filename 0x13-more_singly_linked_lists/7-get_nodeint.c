#include "lists.h"

/**
 * get_nodeint_at_index - Gets a node at index
 * @head: A pointer to listint_t list
 * @index: The index of wanted element
 *
 * Return: A pointer to wanted node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head != NULL && counter < index)
	{
		if (counter == index)
			return (head);
		else
		{
			counter++;
			head = head->next;
		}
	}

	return (NULL);
}
