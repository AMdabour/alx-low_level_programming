#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at an index in a list
 * @h: the list to check
 * @idx: the index of the node to be added
 * @n: data for the new node
 * Return: the address of the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t i, j = 0;
	dlistint_t *tmp = *h, *tmp2 = *h, *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	if (!*h && idx == 0)
	{
		node->prev = NULL;
		node->next = NULL;
		*h = node;

		return (node);
	}

	while (tmp2)
	{
		tmp2 = tmp2->next;
		j++;
	}

	if (j >= idx)
	{
		for (i = 1; i < idx; i++)
		{
			tmp = tmp->next;
		}
		node->prev = tmp;
		node->next = tmp->next;
		tmp->next->prev = node;
		tmp->next = node;

		return (node);
	}

	free(node);
	return (NULL);
}
