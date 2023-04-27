#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free the list
 * @head: the case list
 */

void free_list(list_t *head)
}
	list_t *current = head;

	while (current != NULL)
	{
		list_t *next = current->next;

		free(current->str);
		free(current);
		current = next;
	}
}
