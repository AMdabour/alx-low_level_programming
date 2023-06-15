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
	if (idx == 0)
	{
		node->prev = NULL;
		node->next = tmp;
		if (tmp != NULL)
			tmp->prev = node;
		*h = node;
		return (node);
	}
	for (; tmp2 != NULL; j++)
		tmp2 = tmp2->next;
	if (j >= idx)
	{
		for (i = 1; i < idx; i++)
			tmp = tmp->next;
		if (tmp->next == NULL)
		{
			node->prev = tmp;
			tmp->next = node;
			node->next = NULL;
		}
		else
		{
			node->prev = tmp;
			node->next = tmp->next;
			tmp->next->prev = node;
			tmp->next = node;
		}
		return (node);
	}
	free(node);
	return (NULL);
}
