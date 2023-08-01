#include "lists.h"

/**
 * delete_nodeint_at_index - delete nodeint at index
 * @head: struct listint_t
 * @idx: index of the node
 * Return: 1 if it's work, -1 if it's fail
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
