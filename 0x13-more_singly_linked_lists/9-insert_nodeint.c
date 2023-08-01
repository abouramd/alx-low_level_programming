#include "lists.h"

/**
 * insert_nodeint_at_index - insert nodeint at index
 * @head: struct listint_t
 * @idx: index of the node
 * @n: the data of the new node
 * Return: the addr of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = NULL;
	listint_t *buff = NULL;

	if (!head)
		return (NULL);
	tmp = *head;
	if (idx == 0)
	{
		*head = malloc(sizeof(listint_t));
		if (!*head)
			return (NULL);
		(*head)->next = tmp;
		(*head)->n = n;
		return (*head);
	}
	while (tmp)
	{
		if (--idx == 0)
		{
			buff = malloc(sizeof(listint_t));
			if (!buff)
				return (NULL);
			buff->next = tmp->next;
			tmp->next = buff;
			buff->n = n;
			return (buff);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
