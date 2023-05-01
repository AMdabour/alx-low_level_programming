#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free list
 * @head: the case list
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (current != NULL)
	{
		listint_t *next = current->next;

		free(current);
		current = next;
	}

	free(current);
}
