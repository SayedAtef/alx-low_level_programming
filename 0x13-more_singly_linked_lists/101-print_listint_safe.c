#include "lists.h"

/**
 * print_listint_safe - prints list
 * @head: A pointer to the list
 *
 * Return: number of nodes or status 98 for error
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t list_size = 0;

	if (head == NULL)
		return (98);

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		list_size++;
	}

	return (list_size);
}
