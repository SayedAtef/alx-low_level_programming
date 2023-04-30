#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list
 * @head: A pointer to a pointer to the head of that list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *curr_node = *head;

	while (curr_node != NULL)
	{
		listint_t *next_node = curr_node->next;

		free(curr_node);
		curr_node = next_node;
	}

	*head = NULL;
}
