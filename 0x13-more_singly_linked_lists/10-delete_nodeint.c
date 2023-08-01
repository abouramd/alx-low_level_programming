#include "lists.h"

/**
 * insert_nodeint_at_index - insert nodeint at index
 * @head: struct listint_t
 * @idx: index of the node
 * @n: the data of the new node
 * Return: the addr of new node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *tmp = NULL;
	listint_t *buff = NULL;

	if (!head)
		return (-1);
	tmp = *head;
	if (*head && idx == 0)
	{
		(*head) = tmp->next;
		free(tmp);
		return (1);
	}
	while (tmp && tmp->next)
	{
		if (--idx == 0)
		{
			buff = tmp->next;
			tmp->next = buff->next;
			free(buff);
			return (1);
		}
		tmp = tmp->next;
	}
	return (-1);
}
