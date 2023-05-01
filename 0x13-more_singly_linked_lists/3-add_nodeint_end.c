#include "lists.h"
#include <stdlib.h>

/**
 * addint_node_end - adds a new node to the end of a list
 * @head: the case list
 * @n: an int value to the list
 * Return: the address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = *head;
	listint_t *new_node = mallloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;

		return (new_node);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new_node;

	return (new_node);
}
