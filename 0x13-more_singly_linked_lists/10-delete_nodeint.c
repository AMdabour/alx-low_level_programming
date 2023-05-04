#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete a node at index in a list
 * @head: the case list
 * @index: the index at which deletion will occur
 * Return: 1 on success -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t d;
	listint_t *current = *head;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (d = 0; current || d < index; d++)
	{
		if (d == (index - 1))
		{
			if (current->next)
			{
				listint_t *tmp = current->next;

				current->next = tmp->next;
				free(tmp);
				return (1);
			}
			else
			{
				return (-1);
			}
		}
		else
		{
			current = current->next;
		}
	}

	return (-1);
}
