#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list
 * @head: A pointer to a pointer to the head of that list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	while (head != NULL)
	{
		listint_t *next_node = head->next;

		free(head);
		head = next_node;
	}

	*head = NULL;
}
