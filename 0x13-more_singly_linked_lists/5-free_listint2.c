#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free a list
 * @head: the case list
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *next = current->next;

		free(current);
		current = next;
	}

	*head = NULL;
}
