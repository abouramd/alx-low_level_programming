#include "lists.h"

/**
 * pop_listint - delete the first node in a linked listint
 * @head: struct listint_t
 * Return: return the data of the first node
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *tmp;

	if (head && *head)
	{
		tmp = (*head)->next;
		data = (*head)->n;
		free(*head);
		*head = tmp;
	}
	return (data);
}
