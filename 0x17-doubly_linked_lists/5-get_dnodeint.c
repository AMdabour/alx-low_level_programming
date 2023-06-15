#include "lists.h"

/**
 * get_dnodeint_at_index - get a node in a given index
 * @head: the list to check
 * @index: the index of the node
 * Return: tmp->n or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head, *tmp2 = head;
	size_t i, j = 0;

	if (!head)
		return (NULL);

	while (tmp2)
	{
		tmp2 = tmp2->next;
		j++;
	}

	if (j >= index)
	{
		for (i = 0; i < index; i++)
		{
			tmp = tmp->next;
		}

		return (tmp);
	}

	return (NULL);
}
