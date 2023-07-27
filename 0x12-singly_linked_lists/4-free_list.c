#include "lists.h"

/**
 * free_list - free a linked list
 * @head: struct list_t
 * Return: void
 */

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}
}
