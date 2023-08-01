#include "lists.h"

/**
 * free_listint_safe - free a linked listint
 * @head: struct listint_t
 * Return: void
 */

void free_listint_safe(listint_t **head)
{
	if (head && *head)
	{
		free_listint_safe(&(*head)->next);
		free(*head);
		*head = NULL;
	}
}
