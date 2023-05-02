#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at given index
 * @head: A pointer to a pointer to the head
 * @index: index of node to be deleted
 *
 * Return: 1 if succeeded or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *curr;
	unsigned int i;

	if (*head == NULL)
		return (NULL);

	if (index == 0)
	{
		curr = *head;
		*head = (*head)->next;
		free(curr);
		return (1);
	}

	temp = NULL;
	curr = *head;
	for (i = 0; i < index && curr != NULL; i++)
	{
		temp = curr;
		curr = curr->next;
	}

	if (curr == NULL)
		return (-1);

	temp->next = curr->next;
	free(curr);
	return (1);
}
