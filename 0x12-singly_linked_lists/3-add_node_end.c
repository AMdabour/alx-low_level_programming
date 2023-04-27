#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds new node at the end of a list
 * @head: the list
 * @str: string
 * Return: address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *current = *head;

		while (current != NULL)
		{
			current = current->next;
		}

		current->next = new_node;
	}

	return (new_node);
}
