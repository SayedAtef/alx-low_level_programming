#include "lists.h"

/**
 * sum_listint - Sums all data in a list
 * @head: A pointer to that list
 *
 * Return: Sum of data or 0 if empty
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
