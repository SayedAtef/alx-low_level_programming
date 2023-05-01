#include "lists.h"

/**
 * pop_listint - deletes head node and return 0
 * @head: A pointer to a pointer to the head of the list
 *
 * Return: 0 if the list empty or the data of poped node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int head_data;

	if (*head == NULL)
		return (0);

	head_data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (head_data);
}
