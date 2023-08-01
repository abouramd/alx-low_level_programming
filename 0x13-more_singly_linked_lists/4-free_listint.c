#include "lists.h"

/**
 * free_listint - free a linked listint
 * @head: struct listint_t
 * Return: void
 */

void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
