#include <stdlib.h>
#include "lists.h"

/**
  * free_list - Frees a list from memory
  * @head: A pointer to the head
  *
  * Return: void;
  */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;

		head = head->next;

		free(temp->str);

		free(temp);
	}
}
