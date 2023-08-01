#include "lists.h"

/**
 * sum_listint - sum a linked listint
 * @head: struct listint_t
 * Return: the sum of the nodes data
 */

void sum_listint(listint_t *head)
{
	if (head)
		return (head->n + sum_listint(head->next));
	return (0);
}



