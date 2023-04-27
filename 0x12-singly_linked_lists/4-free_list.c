#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free the list
 * @head: the case list
 */

void free_list(list_t *head)
{
	if (head != NULL)
	{
		free(head);
	}
}
