#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: the case list
 * @index: the index of the node
 * Return: the selected node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	size_t n = 0;

	if (head == NULL)
		return (NULL);

	current = head;

	while (current != NULL)
	{
		if (index == n)
			return (current);

		current = current->next;
		n++;
	}

	return (NULL);
}
