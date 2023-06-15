#include "lists.h"

/**
 * add_dnodeint - adds a new node at the head of a dlistint_t list.
 * @head: pointer to the head of the list
 * @n: data to be added at the head
 *
 * Return: address of new element, or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	temp->prev = NULL;
	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;
	return (temp);
}
