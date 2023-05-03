#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert at index in a list
 * @head: the case list
 * @idx: the index
 * @n: value for n in the node added
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t d;
	listint_t *current = *head;
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (!new_node || !head)
		return (NULL);

	d = 0;
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	while (current != NULL)
	{
		if (d == (idx - 1))
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
		d++;
	}

	free(new_node);

	return (NULL);
}
