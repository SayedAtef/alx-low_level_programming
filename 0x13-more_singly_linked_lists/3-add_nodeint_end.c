#include "lists.h"

/**
 * add_nodeint_end - Adds node at the end of listint_t list
 * @head: A pointer to a pointer to that list
 * @n: int to be added to that list
 *
 * Return: The address of the new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node;

	if (last_node == NULL)
		return (NULL);

	last_node = malloc(sizeof(listint_t));

	last_node->n = n;
	last_node->next = NULL;

	if (*head == NULL)
	{
		*head = last_node;
		return (last_node);
	}
	else
	{
		listint_t *curr = *head;

		while (curr->next != NULL)
			curr = curr->next;
		curr->next = last_node;
	}

	return (last_node);
}
