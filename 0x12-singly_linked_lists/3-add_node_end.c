#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node_end - Adds a new node at the end list
  * @head: A pointer to the head of the list
  * @str: the string to be added to the new node
  *
  * Return: The address of the new element or NULL
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *last_node;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->len = strlen(str);

	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;

		last_node->next = temp;
	}


	return (temp);
}
