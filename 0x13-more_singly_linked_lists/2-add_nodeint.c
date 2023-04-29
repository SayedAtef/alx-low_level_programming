#include "lists.h"

/**
 * add_nodeint - Adds node at the begging
 * @head: A pointer to a pointer to the head of the list
 * @n: Int to be stored in the new node
 *
 * Return: Address to the new node or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
