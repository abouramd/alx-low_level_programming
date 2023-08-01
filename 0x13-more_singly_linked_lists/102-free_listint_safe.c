#include "lists.h"
#include <stddef.h>

/**
 * free_listint_safe - free a linked listint
 * @head: struct listint_t
 * Return: num of node
 */

size_t free_listint_safe(listint_t **head)
{
	size_t count = 0;
	listint_t *tmp;

	if (head && *head)
	{
		tmp = (*head);
		*head = (*head)->next;
		free(tmp);
		if (head && tmp <= head)
		{
			(*head) = NULL;
			return (98);
		}
		count++;
	}
	return (count);
}
