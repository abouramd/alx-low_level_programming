#include "lists.h"

/**
 * get_nodeint_at_index - find a node in a linked listint
 * @head: struct listint_t
 * @index: index of the target
 * Return: return the addr of the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
