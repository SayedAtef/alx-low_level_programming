#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free a dlistint_t list from memory
 * @head: pointer to head of the linked list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;

	while (head != NULL)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
