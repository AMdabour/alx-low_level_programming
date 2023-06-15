#include "lists.h"
void free_h(dlistint_t *tmp1, dlistint_t *tmp3);
/**
 * delete_dnodeint_at_index - delete at an index
 * @head: the list to check
 * @index: the index of the node be deleted
 * Return: 1 in success -1 in failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t i, j = 0;
	dlistint_t *tmp1 = *head, *tmp2 = *head, *tmp3 = NULL;

	if (head == NULL || *head == NULL)
		return (-1);
	for (; tmp2 != NULL; j++)
		tmp2 = tmp2->next;
	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
		}
		else
			*head = NULL;
		free(tmp1);
		return (1);
	}
	if (j >= index)
	{
		for (i = 1; i < index; i++)
			tmp1 = tmp1->next;
		if (tmp1->next == NULL)
		{
			tmp3 = tmp1->prev;
			if (tmp3 != NULL)
				tmp3->next = NULL;
			else
				*head = NULL;
			free(tmp1);
		}
		else
		{
			free_h(tmp1, tmp3);
		}
		return (1);
	}
	return (-1);
}

/**
 * free_h - free a node
 * @tmp1: tmp1
 * @tmp3: tmp3
 */
void free_h(dlistint_t *tmp1, dlistint_t *tmp3)
{
	tmp1 = tmp1->next;
	tmp3 = tmp1->next;
	tmp1->prev->next = tmp3;
	tmp3->prev = tmp1->prev;
	free(tmp1);
}