#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts node at given index
 * @head: A pointer to a pointer to the head of the list
 * @idx: The index where the new node will be added
 * @n: Data to be given to the new node
 *
 * Return: The Address of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *curr;
	unsigned int i;

	if (head == NULL || idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	curr = *head;
	for(i = 0; i < idx - 1; i++)
	{
		if (curr == NULL)
			return (NULL);
		curr = curr->next
	}

	new_node->n = n;
	new_node->next = curr->next;
	curr->next = new_node;

	return (new_node);
}
