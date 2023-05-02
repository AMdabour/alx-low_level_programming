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
	listint_t *current;

	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	if (head == NULL || *head == NULL)
	{
		free(new_node);

		return (NULL);
	}
	d = 0;
	current = *head;
	new_node->n = n;
	while (current != NULL)
	{
		if (idx == d)
		{
			if (current->next == NULL)
				current = new_node;
				new_node->next = NULL;

			else
				listint_t *next = current->next;

				current = new_node;
				new_node->next = next;

			return (new_node);
		}
		current = current->next;
		d++;
	}
	free(new_node);

	return (NULL);
}
