#include "lists.h"

/**
 * reverse_listint - Reverse given list
 * @head: A pointer to a pointer to that list
 *
 * Return: The reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp_prev = NULL, *temp_next;

	while (*head != NULL)
	{
		temp_next = (*head)->next;
		(*head)->next = temp_prev;
		temp_prev = *head;
		*head = temp_next;
	}
	*head = temp_prev;

	return (*head);
}
