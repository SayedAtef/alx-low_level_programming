#include "lists.h"

/**
 * free_listint - Frees listint_t list from memory
 * @head: A pointer to the head of that list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *next_node = head->next;

		free(head);
		head = next_node;
	}
}
