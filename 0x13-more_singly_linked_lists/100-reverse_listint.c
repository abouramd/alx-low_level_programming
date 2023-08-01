#include "lists.h"

/**
 * reverse_listint - revers a linked lists
 * @head: the head of the list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp_prev = NULL;
	listint_t *tmp_next = NULL;

	if (!head || !*head)
		return (NULL);
	while (*head)
	{
		tmp_next = (*head)->next;
		(*head)->next = tmp_prev;
		tmp_prev = (*head);
		(*head) = tmp_next;
	}
	(*head) = tmp_prev;
	return (*head);
}
